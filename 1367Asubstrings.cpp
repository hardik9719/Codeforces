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
    vector<char> a;
    string b;cin>>b;
    for(int i=0;b.length()-1;i++){
        if(b[i]!=b[i+1]){
        a.push_back(b[i]);
        a.push_back(b[i+1]);
        }
        else if(b[i]==b[i+1]){
            a.push_back(b[i]);
            i++;
        }
    }
    printf(a);


    
    return 0;
}