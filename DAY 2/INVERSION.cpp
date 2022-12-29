//Link : https://www.codingninjas.com/codestudio/problems/615?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
int county=0;
void merge(long long *arr,int l,int m,int r){
    long long a[r-l+1];
    int i=l;
    int j=m+1;
    int k=0;
    
    while(i<=m and j<=r){
        if(arr[i]<arr[j]){
            a[k++]=arr[i++];
        }else{
            county+=m-i+1;
            a[k++]=arr[j++];
        }
    }
    while(i<=m){
        a[k++]=arr[i++];
    }
    while(j<=r){
        a[k++]=arr[j++];
    }
    for(int i=l;i<=r;i++){
        arr[i]=a[i-l];
    }
}
void mergesort(long long *arr,int l,int r){
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    mergesort(arr,0,n-1);
   
    return county;
}
