#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>> r>>c;
    int* p = new int[c];
    for(int i=0;i<c;i++){
        cin>> p[i];
    }
    int max = p[0];
    for(int i=0;i<c;i++){
        if(p[i]>max){
            max = p[i];
        }
    }
    cout << "greatest element is: " << max;
    delete []p;
}