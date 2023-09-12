#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i;
    for(i=1;i<=n;i++){
        int k =i;
        int spaces;
        for(spaces=1;spaces<=n-i;spaces++){
            cout<< " ";
        }
        int j;
        for(j=1;j<= i; j++){
            cout<< k;
            k--;
        }
        cout<< endl;
    }

}