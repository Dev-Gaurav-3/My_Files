#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& arr) {
    if (arr.empty()) return;

    // Find the maximum and minimum elements in the array
    int maxElement = *std::max_element(arr.begin(), arr.end());
    int minElement = *std::min_element(arr.begin(), arr.end());

    // Range of the elements
    int range = maxElement - minElement + 1;

    // Create a count array to store the count of each unique object
    std::vector<int> count(range, 0);

    // Count the occurrences of each element
    for (int num : arr) {
        count[num - minElement]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i < range; ++i) {
        while (count[i]-- > 0) {
            arr[index++] = i + minElement;
        }
    }
}

int main() {
    std::vector<int> vec = {4, 2, 2, 8, 3, 3, 1};
    
    countingSort(vec);

    std::cout << "Sorted array: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    return 0;
}
