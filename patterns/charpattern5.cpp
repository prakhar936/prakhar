#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i,j;
   // int k = n;
    for(i=n;i>=1;i--){
        int k = i;
        for(j=n;j>=i;j--){
            char ch = 'A' + k - 1;
            cout<< ch;
            k--;
        }
        cout<< endl;
    }
}