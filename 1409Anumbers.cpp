#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define printf(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
#define input(n){cin>>n;}
#define fo(i,n) for(int i=0;i<n;i++)
#define intinputvector(){cin>>temp;numbers.push_back(temp);}}
using namespace std;

auto above(int threshold) {
    return [=](int value) {
        return value >= threshold;
    };
};

int main(int argc, char** argv){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int t;cin>>t;
    int difference=0;
    int moves=0;
    while(t--){
        int a,b;cin>>a>>b;
        if(abs(a-b)<=10 && a!=b){
            cout<<1<<endl;
        }else{
            difference = abs(max(a,b)-min(a,b));
            moves =0;
            if(difference%10==0){
                cout<<difference/10<<endl;
            }else{

            moves+=difference/10;
            moves+=1;
            cout<<moves<<endl;
            }
        }
    }
    
    return 0;
}