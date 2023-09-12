//Print any one subsequence with given sum
#include<bits/stdc++.h>
using namespace std;
bool sos(int ind,int n,int arr[],vector<int> &v,int sum,int target){
    if(ind == n){
        if(sum == target){
            for(auto it : v){
                cout<< it << " ";
            }
            return true;
        }
        return false;
    }
    v.push_back(arr[ind]);
    sum = sum + arr[ind];
    if(sos(ind+1,n,arr,v,sum,target) == true) return true;

    sum = sum - arr[ind];
    v.pop_back();

    if(sos(ind+1,n,arr,v,sum,target) == true) return true;

    return false;
}
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> v;
    int sum = 0;
    int target = 3;
    sos(0,n,arr,v,sum,target);
}