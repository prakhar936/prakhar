#include <iostream>
using namespace std;
int main(){
    int n,d;
    cout <<"Enter n" << endl;
    cin >> n;
     d = 2;
     bool divided = false;
    while(d<n){
        if(n%d == 0){
            cout <<"Not prime" << endl;
            divided = true;
        }
        d = d + 1;
    }
    if(!divided){
        cout <<"rime";
    }
}