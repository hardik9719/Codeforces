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
    int flag=0;
    n++;
    while(flag!=1){
        string s = to_string(n);
        int first =count(s.begin(),s.end(),s[0]);
        int second =count(s.begin(),s.end(),s[1]);
        int third =count(s.begin(),s.end(),s[2]);
        int fourth =count(s.begin(),s.end(),s[3]);

        if(first>1||second>1||third>1||fourth>1){
            n++;
        }else{
            flag=1;
        }
    }
    cout<<n;

    return 0;
}