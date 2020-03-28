#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        vector<pair<int,int>> arr(n);
        for(int i=0; i<n ; i++){
            cin >> arr[i].first >> arr[i].second;
        }
        sort(arr.begin(), arr.end());
        pair<int, int> start = make_pair(0,0);
        string result;
        int flag = 0;
        for(int i=0; i<n ; i++){
            int r = arr[i].first - start.first;
            int u = arr[i].second - start.second;
            if (r<0 || u<0){
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
            result += string(r, 'R');
            result += string(u, 'U');
            start  = arr[i];
        }
        if(flag==0){
            cout<<"YES\n"<<result<<endl;
        }
    }
    return 0;
}