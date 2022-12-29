//Link 1: https://www.codingninjas.com/codestudio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int low=0;
    int mid=0;
    int high=n-1;
    
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid++],arr[low++]);
        }
        else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[high--],arr[mid]);
        }
    }
}

//Link 2: https://leetcode.com/problems/sort-colors/description/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int m=0;
        int h=nums.size()-1;

        while(m<=h){
            if(nums[m]==0){
                swap(nums[m++],nums[l++]);
            }else if(nums[m]==1){
                m++;
            }else{
                swap(nums[h--],nums[m]);
            }
        }
    }
};
