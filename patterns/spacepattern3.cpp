#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i;
    for(i=1;i<=n;i++){
        int spaces;
        for(spaces=1;spaces<=n-i;spaces++){
            cout << " ";


        }
        int stars;
        for(stars=1;stars<=i;stars++){
            cout<< "*";
        }
        int j;
        for(j=1;j<=i-1;j++){
            cout<< "*";
        }
        cout<< endl;

    
    }
     


}
