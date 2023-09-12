#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;j<n-i;j++){
            if(arr[max]>arr[j]){
                swap(arr[max],arr[j]);
                max = j;
            }

        }
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}