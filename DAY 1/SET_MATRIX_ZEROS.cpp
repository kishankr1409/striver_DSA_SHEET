//Link 1: https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n){
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum=arr[0];
    long long maxSum=arr[0];
    
    for(int i=1;i<n;i++){
        
        sum+=arr[i];
        if(sum<0)
            sum=0;
       if(sum>maxSum){
           maxSum=sum;
       }
    }
    return maxSum;
}

//Link 2: https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int maxSum=nums[0];
        //int x=0,y=0;
        for(int i=1;i<nums.size();i++){
          if(sum+nums[i]>nums[i]){
          //    y++;
              sum+=nums[i];
          }else{
         //     x=i;
              sum=nums[i];
          }
          if(sum>maxSum){
              maxSum=sum;
          }
        }
       // cout<<x<<" "<<y<<endl;
        return maxSum;
    }
};
