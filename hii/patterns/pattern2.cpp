#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout<<"Enter number of rows";
    cin>> n;
    for(i=1;i<=n;i++){
        int j;
        for(j=1;j<=i;j++){
            cout<< "*";
        }
        cout<< endl;

    }

}