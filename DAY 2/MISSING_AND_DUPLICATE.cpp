//Link 1:https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int XOR=0;
    for(int i=0;i<n;i++){
        XOR^=(i+1)^(arr[i]);
    }
    int rsb=XOR & -XOR;
    int x=0;
    int y=0;
    for(int item: arr){
        if((item&rsb)==0){
            x^=item;
        }else{
            y^=item;
        }
    }
    for(int i=1;i<=n;i++){
        if((i&rsb)==0){
            x^=i;
        }else{
            y^=i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return {y,x};
        }
    }
    return {x,y};
}
