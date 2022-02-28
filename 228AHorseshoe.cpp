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
    int n=4;
    set<int> numbers;
    fo(i,n){
        int temp;
        cin>>temp;
        numbers.insert(temp);
    }
    cout<<n-numbers.size();
    
    return 0;
}