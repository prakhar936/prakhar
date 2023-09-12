#include<bits/stdc++.h>
using namespace std;
void subsequence(int arr[],vector<int> &v,int n,int i){
    if(i>=n){
        for(auto it:v){
            cout<< it;
        }
        cout<< "\n";
        if(sizeof(v)==0){
            cout<< "{}";
        }
        return;
    }

    v.push_back(arr[i]);
    subsequence(arr,v,n,i+1);
    v.pop_back();

    subsequence(arr,v,n,i+1);
}
int main(){
    int arr[]= {1,2,3};
    int n = 3;
    int i =0;
    vector<int> v;
    subsequence(arr,v,n,i);

}