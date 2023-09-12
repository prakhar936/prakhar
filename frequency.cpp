#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[1002];
    char cpm[10] = {'0','1','2','3','4','5','6','7','8','9'};
    cin.getline(s,1002);
    int n = strlen(s);
    for(int  i=0;i<10;i++){
        char a = cpm[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(s[j]==a){
                count = count+1;
            }
        }
        cout<< count<<" ";
    }
}