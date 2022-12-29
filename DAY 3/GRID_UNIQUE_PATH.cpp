//Link : https://www.codingninjas.com/codestudio/problems/1081470?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
vector<vector<int>> dp(16,vector<int>(16,-1));
int uniquePaths(int m, int n) {
	// Write your code here.
    if(m==1 and n==1){
        return 1;
    }
    if(m<=0 || n<=0){
        return 0;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    return dp[m][n]=uniquePaths(m-1,n)+uniquePaths(m,n-1);
}
