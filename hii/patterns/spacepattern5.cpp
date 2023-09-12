#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i;
    for(i=1;i<=n;i++){
        int spaces;
        for(spaces=1;spaces<=n-i;spaces++){
            cout<< " ";
        }
        int j;
        for(j=1;j<=i;j++){
            cout<< j;
        }
        int k;
        for(k=i-1;k>=1;k--){ //for(k=j-2;k>=1;k--) also works.
            cout<< k;
        }
        cout<< endl;
    }
}