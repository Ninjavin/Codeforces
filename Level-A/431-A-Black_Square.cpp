#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d;
    string s;
    cin >> a >> b >> c >> d;
    cin >> s;
    long long result=0;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]=='1'){
            result = result + a;
        }
        else if(s[i]=='2'){
            result = result + b;
        }
        else if(s[i]=='3'){
            result = result + c;
        }
        else{
            result = result + d;
        }
    }
    cout<<result;
    return 0;
}