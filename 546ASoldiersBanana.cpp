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
    int k,n,w;cin>>k>>n>>w;
    // cout<<k<<n<<w<<endl;
    int number = 0;
    number= w*(w+1)*k;
    number = number/2;
    if(number<n)
        cout<<0;
    else{
    number=number-n;
    cout<<number;
    }
    return 0;
}