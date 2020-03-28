#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int number_of_odd(int arr[], int n){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2 != 0)
            count++;
        if(count==1)
            break;
    }
    return count;
}

int number_of_even(int arr[], int n){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2 == 0)
            count++;
        if(count==1)
            break;
    }
    return count;
}

int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        int arr[n];        
        cin >> n;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        //if sum is already odd, cout YES
        if( (sum(arr,n)%2 != 0 )|| (number_of_odd(arr,n)==1 && number_of_even(arr,n)==1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}