#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int p =n;
    for(int i=1;i<=n;i++){
        int temp =n;
        for(int j =1;j<=i;j++){
            cout<< temp<< " ";
            temp--;
        }
        for(int k = 1; k<=n-i;k++){
            cout<< p<< " ";
        }
        p--;
        cout<< endl;
    }
}