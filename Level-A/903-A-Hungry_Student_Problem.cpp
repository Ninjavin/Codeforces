#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int x;
        cin >> x;
        int temp = 0;
        for(int a=0 ; a<=33 ; a++){
            for(int b=0 ; b<=33 ; b++){
                if((3*a + 7*b)==x)
                    temp = 1;
            }
        }
        if(temp==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}