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
    int n;cin>>n;int numbers[n];
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        numbers[i]=temp;
    }
    for(int i=0;i<n;i++){
        auto index = find(numbers,numbers+n,i+1);
        cout<<distance(numbers,index+1)<<" ";
    }
    return 0;
}