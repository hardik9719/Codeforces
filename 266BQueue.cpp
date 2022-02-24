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
    int n,t;cin>>n>>t;
    string s;cin>>s;
    vector<int> positions; // holds all the positions that sub occurs within str

    for(int i=0;i<t;i++){
        for(int j=0;j<s.length();j=j+1){
            if(s[j]=='B'&&s[j+1]=='G'){
                positions.push_back(j);
            }
        }
        for(auto i:positions){
            s[i]='G';
            s[i+1]='B';
        }
    }
    cout<<s;

    return 0;
}