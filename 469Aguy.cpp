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
// #define intinputvector(x){int temp;cin>>temp;x.push_back(temp);}
#define intinputvector(x,value){x.push_back(value);}
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
    int n;cin>>n;
    set<int> p;
    vector<int> q;
    int number;

    while(cin>>number){
        p.insert(number);
    }
    int sum = accumulate(all(p),0);
    if(sum==((n*(n+1))/2)){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}