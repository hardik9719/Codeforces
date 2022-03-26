#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
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
    string s="I hate it";
    vector<string> feeling ={"I","hate","it"};
    for(int i=2;i<=n;i++){
        if(i%2==0){
            feeling.insert(feeling.end()-1,"that I love");
        }else{
            feeling.insert(feeling.end()-1,"that I hate");
        }
    }
    print(feeling);
    return 0;
}   