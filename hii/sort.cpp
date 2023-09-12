#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
     for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}

void bubble_sort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<=n-i-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

    void insertion_sort(int arr[],int n){
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }



int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    //selection_sort(arr,n);
    //bubble_sort(arr,n);
    insertion_sort(arr,n);
   
    for(int k=0;k<n;k++){
        cout<< arr[k];
    }
}