//Link : https://www.codingninjas.com/codestudio/problems/pair-sum_697295?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

vector<vector<int>> pairSum(vector<int> &arr, int target){
   // Write your code here.
    unordered_map<int,int> m;
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        if(m.find(target-arr[i])!=m.end()){
            for(int j=0;j<m[target-arr[i]];j++){
             vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(target-arr[i]);
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            }
        }
        m[arr[i]]++;
    }
    sort(ans.begin(),ans.end());
    return ans;
}
