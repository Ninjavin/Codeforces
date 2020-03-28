#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;

    for(int i=0 ; i<s.size() ; i=i++){
        if(s[i]==1)
            count_1++;
        if(s[i]==2)
            count_2++;
        if(s[i]==3)
            count_3++;
    }
    cout<<count_1<<endl;
    cout<<count_2<<endl;
    cout<<count_3<<endl;
    int i=0, j, k;
    
    while(count_1--){
        if(i!=(s.size()-1)){
            cout<<'1+';
            i++;
        }
        else
            cout<<'1';
    }
    j=i+1;
    while(count_2--){
        if(j!=(s.size()-1)){
            cout<<'2+';
            j++;
        }
        else
            cout<<'2';
    }
    k=j+1;
    while(count_3--){
        if(k!=(s.size()-1)){
            cout<<'3+';
            k++;
        }
        else
            cout<<'3';
    }

    return 0;
}
