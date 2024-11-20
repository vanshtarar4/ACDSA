#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int tar) { 
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar < arr[mid]) 
            end = mid - 1;  
        else if (tar > arr[mid]) 
            st = mid + 1;  
        else
            return mid;   
    }
    return -1; 
}

int main() {
    vector<int> arr1 = {-1, 3, 4, 5, 9, 11, 15};
    int target = 11;

    cout << binary_search(arr1, target) << endl; 
    
    return 0;
}
