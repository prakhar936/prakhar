#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i;
    for(i=1;i<=n;i++){
        int spaces;
        for(spaces=1; spaces<= n-i;spaces ++){
            cout<< " ";
        }
        int j;
        for(j=1;j<=i;j++){
            cout<< j;
        }
        cout<< endl;
    }

}