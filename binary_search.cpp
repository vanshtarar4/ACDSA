#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int tar) { // Iterative
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar < arr[mid]) // Compare with arr[mid]
            end = mid - 1;  // Search in the left half
        else if (tar > arr[mid]) // Compare with arr[mid]
            st = mid + 1;  // Search in the right half
        else
            return mid;     // Target found
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr1 = {-1, 3, 4, 5, 9, 11, 15};
    int target = 11;

    cout << binary_search(arr1, target) << endl; // Output: 5 (index of 11)
    
    return 0;
}
