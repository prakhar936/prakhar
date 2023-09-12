#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(string str,int i,int n){
    if(i>=n) return true;
     if(str[i]==str[n]){
      bool ans = palindrome(str,i+1,n-1); // because every function will return to previous function
      if(ans==true) return true;
     }
    return false;
}
int main(){
    string str;
    cin>> str;
    int n = str.size();
    int p = palindrome(str,0,n-1);
    cout<< p <<'\n';
    if(p==1) cout<< "string is palindrome";
    else if(p==0) cout<< "string is not a palindrome";

}