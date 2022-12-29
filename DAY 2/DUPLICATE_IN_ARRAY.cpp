//Link 1: https://www.codingninjas.com/codestudio/problems/1112602?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    arr.push_back(0);
    int next=arr[0];
//     arr[0]=-1;
    while(1){
        if(arr[next]==-1){
            return next;
        }
        int temp=next;
        next=arr[next];
        arr[temp]=-1;
    }
    return 0;
}


//Link 2:https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[nums[i]%n]+=n;
        }
        for(int i=0;i<n;i++){
            if(nums[i]/n>=2)
             return i;   
        }
        return 0;
    }
};
