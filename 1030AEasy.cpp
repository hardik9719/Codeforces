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
    int n;cin>>n;int flag=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==1){
            flag=1;
            break;
        }
    }
    if(flag)
    cout<<"HARD";
    else
    cout<<"EASY";
    return 0;
}