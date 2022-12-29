//Link 1: https://www.codingninjas.com/codestudio/problems/842495?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int candidate;
    int votes=0;
    
    for(int i=0;i<n;i++){
        if(votes==0){
            candidate=arr[i];
        }
        if(arr[i]==candidate){
            votes++;
        }else{
            votes--;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>n/2){
        return candidate;
    }else{
        return -1;
    }
}
