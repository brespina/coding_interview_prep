/*
    NOTE: I only author the changes made between the starter.cpp and this main.cpp. 
          - typically i only modify the function asked of me. and occassionally write 
            other helper functions for it. these are what i author.
    author: brespina
    edits: wrote plusMinus function

*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

/*
    author: brespina 
    desc: take array of ints, compute the ratios of positive, negative, and zeros, in the array
    idea: simple im pretty sure. not anyway for me to think to improve
          iterate thru array incrementing appropriate trackers.
          then divide by total num elems.

*/


void plusMinus(vector<int> arr) {
    // trackers and iterate then divide by total
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    int size = arr.size();
    
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) { positives++; }
        else if(arr[i] < 0) { negatives++; }
        else { zeros++; }
        // assuming valid inputs so just else
    }
    float posRatio = float(positives) / size;
    float negRatio = float(negatives) / size;
    float zeroRatio = float(zeros) / size;
    
    cout << setprecision(7) << posRatio << endl;
    cout << setprecision(7) << negRatio << endl; 
    cout << setprecision(7) << zeroRatio << endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

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
