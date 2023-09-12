#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=1;i<=n;i++){
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*" <<" ";
        }
        cout<< endl;
    }
    for(int i=n+1;i<=2*n;i++){
        for(int spaces=1;spaces<=i-n-1;spaces++){
            cout<< " ";
        }
        for(int j=2*n;j>=i;j--){
            cout<<"*"<<" ";
        }
        cout<< endl;
    }
    return 0;
}