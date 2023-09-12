#include<iostream>
using namespace std;
//parameterised method
void sumofn(int n,int sum){
    if(n<1){
        cout<< sum;
        return;
    }
    sumofn(n-1,sum+n);


}
int main(){
    int n;
    cin>>  n;
    sumofn(n,0);
}


//functional  method
int sumofn(int n){
    if(n<1)
    return 0;
    return n + sumofn(n-1);
}
int main(){
    int n;
    cin>> n;
    int sum = sumofn(n);
    cout<< sum;
}