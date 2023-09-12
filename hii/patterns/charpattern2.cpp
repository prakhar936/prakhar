#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i,j;
    for(i=1;i<=n;i++){
        int k = i;
        for(j=1;j<=n;j++){
            char ch = 'A' + k - 1;
            cout<< ch;
            k++;
        }
        cout<< endl;
    }
}