//QUESTIION: https://practice.geeksforgeeks.org/problems/second-largest3735/1


#include <bits/stdc++.h>
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int len = arr.size();
        int largest=INT_MIN;
        int slargest=INT_MIN;
        if(len <2) return -1;
        for(int i = 0; i<len; i++){
            if(arr[i]>largest){
                slargest=largest;
                largest = arr[i];
            }
            else if(arr[i]>slargest && arr[i]!=largest){
                slargest = arr[i];
            }
        }
        if(slargest == INT_MIN) return -1;
        return slargest;
    }
};