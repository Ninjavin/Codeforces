#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        vector<int> something;
        for(int i=2 ; (i*i) <=n ; i++){
            if(n%i == 0 && !count(something.begin(), something.end(), i)){
                something.push_back(i);
                n = n/i;
                break;
            }
        }
        for(int i = 2; (i*i)<=n ; i++){
            if(n%i == 0 && !count(something.begin(), something.end(), i)){
                something.push_back(i);
                n = n/i;
                break;
            }
        }
        if( something.size()<2 || n==1 || count(something.begin(), something.end(), n)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            something.push_back(n);
            for(auto it: something){
                cout<< it<< " ";
            }
            cout<<endl;
        }
    }
    return 0;
}