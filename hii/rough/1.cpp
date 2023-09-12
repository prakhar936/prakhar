#include<bits/stdc++.h>
using namespace std;
void reversal(int arr[],int i,int n){
    if(i>=n) return;
    swap(arr[i],arr[n]);
    reversal(arr,i+1,n-1);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<< "befor reversal:"<<"\n";
    for(int i = 0;i<5;i++){
        cout<< arr[i];
    }
    cout<<"\n";
    reversal(arr,0,4);
    cout<< "after reversa:" << "\n";
    for(int i = 0;i<5;i++){
        cout << arr[i];
    }

}