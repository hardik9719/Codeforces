#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    string a;cin>>a;
    string b;cin>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    // cout<<a<<" "<<b;
    // if(a<b){
    //     cout<<-1;
    // }else if(b<a){
    //     cout<<1;
    // }else if(a==b){
    //     cout<<0;
    // }
    int flag=0;
    for(int i=0;i<a.length();i++){
        if(a[i]<b[i]){
        flag=-1;
        }
        else if(a[i]>b[i]){
            flag=1;
        }else if(a[i]==b[i]){
            flag=0;
        }
    }
    cout<<flag;
    
    return 0;
}