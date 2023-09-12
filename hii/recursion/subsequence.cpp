//Print all the subsequence of the given array
#include <bits/stdc++.h>
using namespace std;
void subsequence(int n, vector<int> &v, int arr[], int ind){
    if(ind==n) {
        for(auto p : v){
            cout<< p << " ";
        }
    cout<< '\n';
    return;

    }
    v.push_back(arr[ind]);
    subsequence(n,v,arr,ind+1);
    v.pop_back();

    subsequence(n,v, arr,ind+1);
    
}
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> v;
    subsequence(n,v,arr,0);
}