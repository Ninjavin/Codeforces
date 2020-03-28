#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        int start = -1, end = n;
        for(int i=0 ; i<n ; i++){
            if(arr[i] < i)
                break;
            start = i;
        }
        for(int i=(n-1) ; i >=0; i--){
            if(arr[i] < n-1-i)
                break;
            end = i;
        }
        if(end<=start)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}