//QUESTION: https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end/0

#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j=0;
        for( int i=0; i<arr.size(); i++){
            if (arr[i] != 0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    
    }
};