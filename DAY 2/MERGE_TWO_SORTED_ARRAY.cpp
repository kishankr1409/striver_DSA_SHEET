//Link 1:https://www.codingninjas.com/codestudio/problems/1214628?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website


#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int idx=0;
    for(int i=m;i<m+n;i++){
        arr1[i]=arr2[idx++];
    }
//     return arr1;
    int gap=ceil((float)(m+n)/2.0);
//     cout<<gap<<endl;
    while(gap>0){
        int i=0;
        int j=gap;
        while(j<(m+n)){
            if(arr1[i]>arr1[j]){
                swap(arr1[i],arr1[j]);
            }
            i++;
            j++;
        }
        if(gap==1){
            gap=0;
        }else{
            gap=ceil((float)gap/2.0);
        }
    }
    return arr1;
}

//Link 2:https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx=0;
        for(int i=m;i<n+m;i++){
         nums1[i]=nums2[idx++];
        }
        int gap=ceil((m+n)/2.0);
        while(gap>0){
            int i=0;
            int j=gap;
            while(j<m+n){
                if(nums1[i]>nums1[j]){
                    swap(nums1[i],nums1[j]);
                }
                i++;
                j++;
            }
            if(gap==1)
            gap=0;
            else
            gap=ceil(gap/2.0);
        }
    }
    //1 2 3 2 5 6
    //  i     j   m+n-1
};
