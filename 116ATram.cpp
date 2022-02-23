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
    int c=0;
    int a,b;
    vector<int> bus;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c=c-a;
        c=c+b;
        bus.push_back(c);
    }
    int ans= *max_element(bus.begin(),bus.end());
    cout<<ans;

    return 0;
}