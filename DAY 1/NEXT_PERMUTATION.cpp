//Link 1: https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int i,j;
    for(i=n-2;i>=0;i--){
        if(p[i]<p[i+1]){
            break;
        }
    }
    if(i<0){
     reverse(p.begin(),p.end());
    }else{
        for(j=n-1;j>i;j--){
            if(p[j]>p[i]){
                break;
            }
        }
        swap(p[i],p[j]);
        reverse(p.begin()+i+1,p.end());
    }
    return p;
}

//Link 2: https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0)
            reverse(nums.begin(),nums.end());
        else{
            for(j=n-1;j>i;j--){
                if(nums[j]>nums[i]){
                    break;
                }
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
