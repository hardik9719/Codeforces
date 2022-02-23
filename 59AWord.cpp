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
    string s;cin>>s;
    int upper_counter =0;
    for(auto i:s){
        if(isupper(i)){
            upper_counter++;
        }
    }
    if(upper_counter>s.length()/2){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s;
    return 0;
}