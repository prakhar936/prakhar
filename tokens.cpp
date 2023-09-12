#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[1000];
    cin.getline(s,1000);
    int len = strlen(s);
    for(int i =0;s[i]!='\0';i++){
        cout<< s[i];
        if(s[i]==' '){
            cout<< endl;
        }
    }
}