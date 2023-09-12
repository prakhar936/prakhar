//Print number of subsequence with given sum
#include<bits/stdc++.h>
using namespace std;
int sos(int ind,int n,int arr[],int sum,int target){
    if(ind == n){
        if(sum == target){
            return 1;
        }
        return 0;
    }

    sum = sum + arr[ind];
    int l = sos(ind+1,n,arr,sum,target);
    sum = sum - arr[ind];

    int r = sos(ind+1,n,arr,sum,target);

    return l+r;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int sum = 0;
    int target = 1;
    cout<< sos(0,n,arr,sum,target);
}