//Link :https://leetcode.com/problems/powx-n/description/
class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
           return 1.0/f(x,n);
        }else{
            return f(x,n);
        }
    }
    double f(double x,int n){
        if(n==0){
            return 1;
        }
        double temp=f(x,n/2);
        if(n%2){
            return temp*temp*x;
        }else{
            return temp*temp;
        }
    }
};
