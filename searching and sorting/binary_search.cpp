#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int> arr, int target) {
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r) {
        // Corrected midpoint formula
        int mid = l + (r - l) / 2; 

        if (target == arr[mid]) {
            cout << "Element found at index: " << mid << endl;
            return mid;
        } 
        // If target is smaller, look in the left half
        else if (target < arr[mid]) {
            r = mid - 1; 
        } 
        // If target is larger, look in the right half
        else {
            l = mid + 1; 
        }
    }

    cout << "Element not found in the array." << endl;
    return -1; // Added a return for when the element isn't found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 8;
    BinarySearch(arr, target);

    return 0;
}