#include<iostream>
using namespace std;

//two pointer method
/*void reversal(int arr[],int n,int i){
    if(i>n/2)
    return;
    swap(arr[i],arr[n-1]);
    reversal(arr,n-1,i+1);

}
int main(){
    int arr[100];
    int n;
    cin>> n;
    for(int i=0;i<n;i++) cin>> arr[i];
    reversal(arr,n,0);
    for(int i=0;i<n;i++) cout<< arr[i] << " ";
}*/



//single variable approach
void reversal(int arr[],int n,int i){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reversal(arr,n,i+1);
}
int main(){
    int n;
    cin>> n;
    int arr[100];
    for(int i=0;i<n;i++) cin>> arr[i];

    reversal(arr,n,0);
    for(int i=0;i<n;i++) cout<< arr[i];
}