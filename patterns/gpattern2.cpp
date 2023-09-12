#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=1;i<=n;i++){
        int temp = 1;
        for(int j = n;j>=i;j--){
            cout<< temp;
            temp++;
        }
        cout<< endl;
    }
}