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
    int a,b;cin>>a>>b;
    int years=1;
    while(a<b){
        a=a*3;
        b=b*2;
        if(a>b)
        break;
        years++;
    }
    cout<<years;
    return 0;
}