#include <iostream>
#include <unordered_map>
#include <vector>

    /*i am extremely fucking pissed that my fucking acoustic brain over thought this to hell and back
        since hashMap's values are the indexes of the occurrences of X in arr,
        we simply check if hashMap[X][occurrenceQueries[i]] exists or not.
        thats it.

        1. loop thru occurrenceQueries which hold the kthOcc we look for
        2. check if the query_value, aka k, is bigger than the size of the occurrence array. if so, return -1 
        3. just use qv[i] to index the value of hashMap[X]...
    */

    // edit 10/02/2024 pass by reference was a big missed opportunity for improvement
    //                 since we aren't manipulating the data, set const.
    std::vector<int> kthOccurrence(int X, const std::vector<int> &arr, const std::vector<int> &occurrenceQueries) {
    // initialize return var and hashMap
    std::vector<int> results = {};
    std::unordered_map<int, std::vector<int> > hashMap;
    
    for (int i = 0; i < arr.size(); i++) 
        hashMap[arr[i]].push_back(i);

    for (int i = 0; i < occurrenceQueries.size(); i++) {
        if (occurrenceQueries[i] > hashMap[X].size()) 
            results.push_back(-1);            
        else
            results.push_back(hashMap[X][occurrenceQueries[i] - 1]); 
    }

    return results;
}

int main() {
    // test sample made up.
    // note: if kthOccurrence didnt take in vectors as arguments,
    //       we should declare static arrays as arrays, no reason to use heap
    std::vector<int> arr = {0, 20, 1, 9, 1, 5, 9, 9, 2, 2};
    int X = 9;
    std::vector<int> occurrenceQueries = {476, 3, 9, 1, 2};
    std::vector<int> answer = {-1, 7, -1, 3, 6};
    std::vector<int> occArray = kthOccurrence(X, arr, occurrenceQueries);
    std::cout << "computed: " << std::endl;
    for (int i = 0; i < occArray.size(); i++) {
        std::cout << occArray[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "validation: " << std::endl;
    for (int j = 0; j < answer.size(); j++) {
        std::cout << answer[j] << " ";
    }
    std::cout << std::endl;
    return 0;
}
