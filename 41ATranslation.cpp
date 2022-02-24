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
    string a;cin>>a;cin.ignore();
    string b;cin>>b;
    reverse(b.begin(),b.end());
    // cout<<a<<b;
    if(a!=b)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}