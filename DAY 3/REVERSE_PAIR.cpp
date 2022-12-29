//Link: https://www.codingninjas.com/codestudio/problems/1112652?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
int ans=0;
void merge(vector<int> &arr,int l,int m,int r){
    int y=m+1;
    for(int i=l;i<=m;i++){
        while(y<=r and arr[i]>2LL*arr[y]){
            y++;
        }
        ans+=(y-m-1);
    }
    vector<int> a;
    int i=l;
    int j=m+1;
    
    while(i<=m and j<=r){
        if(arr[i]<arr[j]){
            a.push_back(arr[i++]);
        }else{
            a.push_back(arr[j++]);
        }
    }
    while(i<=m){
         a.push_back(arr[i++]);
    }
    while(j<=r){
         a.push_back(arr[j++]);
    }
    for(int i=l;i<=r;i++){
        arr[i]=a[i-l];
    }
}
void mergeSort(vector<int> &arr,int l,int r){
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);  
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
    ans=0;
    mergeSort(arr,0,n-1);
    return ans;
}
