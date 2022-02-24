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
    int n;cin>>n;
    string s;cin>>s;
    int a= count(s.begin(),s.end(),'A');
    int d= count(s.begin(),s.end(),'D');
    if(a>d)
    cout<<"Anton";
    else if(d>a)
    cout<<"Danik";
    else if(a==d)
    cout<<"Friendship";

    return 0;
}