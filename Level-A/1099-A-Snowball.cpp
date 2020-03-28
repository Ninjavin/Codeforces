#include<bits/stdc++.h>
using namespace std;
int main(){
    int w, h, u1, d1, u2, d2;
    cin >> w >> h;
    cin >> u1 >> d1;
    cin >> u2 >> d2;
    for(int i=h ; i>=1 ; i--){
        if(i==d1){
            w = w + i;
            w = (w-u1)<0 ? 0 : w-u1;
        }
        else if(i==d2){
            w = w + i;
            w = (w-u2)<0 ? 0 : w-u2;
        }
        else{
            w = w + i;
        }
    }
    cout << w;
    return 0;
}