//Print all the subsequence with the given sum
#include<bits/stdc++.h>
using namespace std;
void sos(int ind,int arr[], vector<int> &v,int sum, int target, int n){
    if(ind==n){
        if(sum==target){
            for(auto p: v){
                cout<< p << " ";
            }
            cout<<'\n';
        }
        return; 
    }
     
    v.push_back(arr[ind]);
    sum = sum + arr[ind];
   
    sos(ind+1,arr,v,sum,target,n);

    sum = sum - arr[ind];
    v.pop_back();
    

    sos(ind+1,arr,v,sum,target,n);
}
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> v;
    int sum = 0;
    int target = 3;
    sos(0,arr,v,sum,target,n);
}