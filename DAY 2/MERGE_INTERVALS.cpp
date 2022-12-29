//Link 1: https://www.codingninjas.com/codestudio/problems/699917?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &interval)
{
    // Write your code here.
    vector<vector<int>> ans;
    if(interval.size()==0){
        return ans;
    }
    sort(interval.begin(),interval.end());
    vector<int> temp=interval[0];
    for(auto x: interval){
        if(x[0]<=temp[1]){
            temp[1]=max(temp[1],x[1]);
        }else{
            ans.push_back(temp);
            temp=x;
        }
    }
    ans.push_back(temp);
    return ans;
}

//Link 2: https://leetcode.com/problems/merge-intervals/description/
class Solution {
public:
    static bool cmp(const vector<int> &a,const vector<int> &b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> ans;
        int n=intervals.size();
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                end=max(intervals[i][1],end);
            }else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};
