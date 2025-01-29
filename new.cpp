// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;


long long fibonacci(long long n,vector<long long> &dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
}
int main(){
    //finding the fibonnaci series 
    long long n=80;
    vector<long long> dp(n+1,-1);
    cout<<fibonacci(n,dp);
    return 0;
    
}