//Link :https://www.codingninjas.com/codestudio/problems/980531?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int i=0;
    int j=n-1;
    
    while(i<m and j>=0){
        if(target==mat[i][j]){
            return true;
        }else if(target<mat[i][j]){
            j--;
        }else{
            i++;
        }
    }
    return false;
}
