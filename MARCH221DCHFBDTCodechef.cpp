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
        int n;cin>>n;
        int count=0;
        int values[n]={0};
        for(int i=1;i<=n;i++){
            if(values[i]==0){
                count++;
                values[i]=1;
                if(2*i<=n)
                values[2*i]=1;
                
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}