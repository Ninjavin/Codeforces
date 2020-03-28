#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    for(int i=0 ; i<n ; i++){
        printf("%c",97+(i%k));
    }
    return 0;
}