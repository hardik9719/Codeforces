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
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a,b;
        fo(i,n){
            int temp;cin>>temp;
            a.push_back(temp);
        }
        fo(i,n){
            int temp;cin>>temp;
            b.push_back(temp);
        }

        sortall(a);
        sort(b.begin(),b.end(),greater<int>());
        fo(i,k){
            if(b[i]>a[i])
            a[i]=b[i];
            else
            break;
        }
        cout<<accumulate(a.begin(),a.end(),0)<<endl;
        // cout<<*(a.begin()+k);

    }
    return 0;
}