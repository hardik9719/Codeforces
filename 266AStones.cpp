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
    cin.ignore();
    int counter=0;
    string s;cin>>s;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}