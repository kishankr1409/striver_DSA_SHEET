//Link: https://www.codingninjas.com/codestudio/problems/983605?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
bool twoSum(vector<int> arr,int idx,int target){
   int i=idx;
    int j=arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            return true;
        }else if(arr[i]+arr[j]>target){
            j--;
        }else{
            i++;
        }
    }
    return false;
}
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            bool temp=twoSum(arr,j+1,target-arr[i]-arr[j]);
            if(temp){
                return "Yes";
            }
        }
    }
    return "No";
}
