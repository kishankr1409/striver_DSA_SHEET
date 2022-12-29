//Link 1: https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) {
  // Write your code here.
    vector<vector<long long int>> ans;
    
    for(int i=1;i<=n;i++){
        vector<long long int> temp(i,1);
        for(int j=1;j<i-1;j++){
            temp[j]=ans[i-2][j]+ans[i-2][j-1];
        }
        ans.push_back(temp);
    }
    return ans;
}

//Link 2: https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back({1});
        
        if(numRows==1)
            return v;
        
        v.push_back({1,1});
        if(numRows==2)
            return v;
        
        for(int i=3;i<=numRows;i++){
            vector<int> temp(i,1);
            for(int j=1;j<i-1;j++)
                temp[j]=v[i-2][j-1]+v[i-2][j];
            v.push_back(temp);
        }
        return v;
    }
};
