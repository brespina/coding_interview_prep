#include <iostream>
#include <vector>

std::vector<int> kthOccurrence(int X, std::vector<int> arr, std::vector<int> occurrenceQueries) {

}

int main() {
    // test sample made up.
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
