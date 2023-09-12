#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i =1;i<=n;i++){
        int temp =i;
        int p = 2;
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        for(int j =1;j<=i;j++){
            cout<< temp << " ";
            temp--;
        }
        for(int k=1;k<=i-1;k++){
            cout<< p<< " ";
            p++;
        }
        cout<< endl;
    }
}