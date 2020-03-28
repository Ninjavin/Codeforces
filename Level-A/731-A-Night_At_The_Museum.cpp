#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int result = 0;
    int current = 1;
    for(int i=0 ; i<s.length() ; i++){
        result = result + min(current, 26-current);
        current = result;
    }

    cout<<result;

    return 0;
}