#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for(int i=0 ; i<s.length() ; i++){
        if(isupper(s[i]))
            upper++;
        else
            lower++;
    }
    if(upper>lower){
        for(int i=0 ; i<s.length() ; i++){
            cout<<toupper(s[i]);
        }
    }
    else{
        for(int i=0 ; i<s.length() ; i++){
            cout<<tolower(s[i]);
        }
    }
    return 0;
}