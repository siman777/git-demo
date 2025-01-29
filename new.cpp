// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

bool palindrome(string s,int start,int end){
    if(start>=end) return true;
    if(s[start]!=s[end]) return false;
    return palindrome(s,start+1,end-1);
    
}
int main(){
    //sum of given number by using recusion
   string s="";
   cout<<"enter the string :";
   cin>>s;
   if(palindrome(s,0,s.size()-1)) cout<<"string is plaindrome";
   else cout<<"string is not palindrome";
    
}