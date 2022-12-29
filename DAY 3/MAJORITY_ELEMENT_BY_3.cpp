//Link :https://www.codingninjas.com/codestudio/problems/893027?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    int c1=-1,c2=-1;
    int v1=0;
    int v2=0;
    
    for(int i=0;i<n;i++){
         if(arr[i]==c1){
            v1++;
        }else if(arr[i]==c2){
            v2++;
        }else if(v1==0){
            c1=arr[i];
            v1=1;
        }else if(v2==0){
            c2=arr[i];
            v2=1;
        }else{
            v1--;
            v2--;
        }
    }
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==c1){
            count1++;
        }
        if(arr[i]==c2){
            count2++;
        }
    }
    vector<int> ans;
    if(count1>n/3){
        ans.push_back(c1);
    }
    if(count2>n/3){
        ans.push_back(c2);
    }
    return ans;
}
