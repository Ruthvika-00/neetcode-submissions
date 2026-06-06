class Solution {
public:
    double mypow(double x, int p){
        if(p==1) return x;
        double pow = mypow(x,p/2);
        double res;
        if(p%2==0){
            res = pow*pow;
        } else{
            res = x*pow*pow;
        }
        return res;
    }
    double myPow(double x, int n) {
        if(n==0) return double(1);
        double p= abs(n);
        double res = mypow(x,p);
        return (n>=0) ? res : 1/res;
    }
};
