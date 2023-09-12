#include<iostream>
using namespace std;


//normal
void print(int n){
    if(n<1)
    return;
    cout<< n;
    print(n-1);
}
int main(){
    int n;
    cin>> n;
    print(n);
}




//back tracking
void print(int i,int n){
    if(i>n)
    return;
    print(i+1,n);
    cout<< i;

}
int main(){
    int n;
    cin>> n;
    print(1,n);
}