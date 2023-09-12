#include<bits/stdc++.h>
using namespace std;

int sort(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low; int j = high;
    while(i<j){
        while(pivot<=arr[i] && i<=high-1){
            i++;
        }
        while(pivot>arr[j] && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]); 
        }
    }

        swap(arr[low],arr[j]);
        return j;
}

void qs(vector<int> &arr,int low,int high){
    while(low<high){
        int partition = sort(arr,low,high);
        qs(arr,low,partition-1);
        qs(arr,partition+1,high);
    }

}

int main(){
    vector<int> arr{4,3,1,7,8,5,9};
    qs(arr,0,6);

    for(auto it : arr){
        cout<< it <<" ";
    }
} 