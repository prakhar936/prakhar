#include<iostream>
using namespace std;
//funtional
int factorial(int n){
    if(n==0)
    return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>> n;
    int fac = factorial(n);
    cout<< fac;
}


//parameterised
int factorial(int i,int n){
    if(i>n)
    return 1;
    return i * factorial(i+1,n);
}
int main(){
    int n;
    cin>> n;
    int fact = factorial(1,n);
    cout<< fact;
}