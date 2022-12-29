//Link:https://www.codingninjas.com/codestudio/problems/1115652?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int XOR=0;
    int ans=0;
    unordered_map<int,int> m;
    for(int i=0;i<arr.size();i++){
        XOR^=arr[i];
        if(XOR==x){
            ans++;
        }
        int temp=x^XOR;
        if(m.find(temp)!=m.end()){
            ans+=m[temp];
        }
        m[XOR]++;
    }
    return ans;
}
