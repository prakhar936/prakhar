#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int d =0;
    int arr[1999][1999];
    for(int i=(2*n)-2;i>=0;i--){
        for(int j =(2*n)-2;j>0;j--){
            while(n-d>0){
                int temp =2;
                if(i==(2*n)-temp || j==(2*n)-temp){
                arr[i][j] = n -d;
                temp++;
                }
                d++;
            }
            
        }
        d =0;
    }
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            cout<< arr[i][j];
        }
        cout<< endl;
    }

}