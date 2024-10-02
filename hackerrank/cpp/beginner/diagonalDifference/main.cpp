#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
  Complete the 'diagonalDifference' function below.
 
  The function is expected to return an INTEGER.
  The function accepts 2D_INTEGER_ARRAY arr as parameter.
  author: bwandi
  desc: square matrix, calc abs diff between sums of diagonals.
  1 2 3
  4 5 6
  7 8 9
  left to right diag -> 1 + 5 + 9 = 15
  right to left diag -> 3 + 5 + 7 = 15
  absolute difference -> | 15 - 15 } = 0
  
  function: diagDiff:
        takes in int arr[n][m] <- not square? ans: first sentence of question "given square matrix"
        returns absolute diag diff

  contraints: 
    -100 <= arr[i][j] <= 100        
  
  idea: no need for BFS DFS since our path is determined
        just take a +- 1, 1 step from corner appropriately.
 */

int diagonalDifference(vector<vector<int>> arr) {
    // idea: i=0 j=0 is always starting point. we only need to + (1,1) to left-right diag
    //       and add (+1, -1) to right top corner. and loop for size - 1.


    // (row, col) steps
    int leftRightStep[2] = {1, 1};
    int rightLeftStep[2] = {1, -1};
    int leftRightRow = 0;
    int leftRightCol = 0;
    int rightLeftRow = 0;
    int rightLeftCol = arr[0].size() - 1; 
   
    // set sum to initial value
    int leftRightSum = arr[leftRightRow][leftRightCol]; 
    int rightLeftSum = arr[rightLeftRow][rightLeftCol]; 
    
    for(int i = 0; i < arr[0].size() - 1; i++) { // only loop thru top row.
        // step diags
        leftRightRow += leftRightStep[0];      
        leftRightCol += leftRightStep[1];
        rightLeftRow += rightLeftStep[0];      
        rightLeftCol += rightLeftStep[1]; 
        // compute sum 
        leftRightSum += arr[leftRightRow][leftRightCol];
        rightLeftSum += arr[rightLeftRow][rightLeftCol]; 
    }
    
    int absDiff = abs(leftRightSum - rightLeftSum);

    return absDiff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
