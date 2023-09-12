#include<iostream>
using namespace std;

/*//back tracking
void print(int n){
    if(n<1)
    return;
    print(n-1);
    cout<< n;
}
int main(){
    int n;
    cin>> n;
    print(n);
}*/



//normal
void print(int i,int n){
    if(i>n)
    return;
    cout<< i;
    print(i+1,n);
}
int main(){
    int n;
    cin>> n;
    print(1,n);
}