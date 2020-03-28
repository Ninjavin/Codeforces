#include<bits/stdc++.h>
using namespace std;
int main(){
    int no_of_dice;
    cin >> no_of_dice;
    int top;
    cin >> top;
    int size_of_array = 2*no_of_dice;
    int arr[size_of_array];
    for(int i=0; i<size_of_array ; i++){
        cin >> arr[i];
    }
    bool some = true;
    for(int i=0; i<size_of_array ; i++){
        if((7-top) == arr[i] || (7-top) == (7-arr[i])){
            some = false;
            cout<<"NO";
            break;
        }
    }
    if(some){
        cout<<"YES";
    }

    return 0;
}