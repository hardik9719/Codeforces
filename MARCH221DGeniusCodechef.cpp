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
    int n,x;cin>>n>>x;
    int rc=0;int wc=0;int uc=0;
    while(t--){
        if(n*3<x){
        cout<<"NO"<<endl;
        }else{
            if(x%3==0 && x>0){
                cout<<"YES"<<endl;
                cout<<x/3<<" "<<0<<" "<<n-(x/3)<<endl;
            }else{

            if((x+1)%3==0){
                rc = x/3;
                wc=1;
            }else if((x+2)%3==0){
                rc = x/3;
                wc=2;

            }
            uc = n-rc-wc;
            if(rc+wc>n){
            cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
                cout<<rc<<" "<<wc<<" "<<uc;
            }

          
        }
    }
    return 0;
}