//Link: https://www.codingninjas.com/codestudio/problems/630418?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
int uniqueSubstrings(string str)
{
    //Write your code here
    int i=0;
    int j=0;
    int ans=0;
    int n=str.length();
    unordered_map<char,int> m;
    while(i<n){
        if(m.find(str[i])!=m.end()){
            j=max(j,m[str[i]]+1);
        }
        m[str[i]]=i;
        ans=max(ans,i-j+1);
//         cout<<ans<<endl;
        i++;
    }
    return ans;
}
