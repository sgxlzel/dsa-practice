#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int>& arr) {
    
    for(int i=0; i<arr.size(); i++){
        int min = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    SelectionSort(arr);
    cout << "Sorted array: \n";
    for (int i=0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}