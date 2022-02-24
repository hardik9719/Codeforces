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
        int temp;
        cin>>temp;
        numbers[i]=temp;

    }
    int counter =0;
    if(n==1){
        cout<<1;
    }else{
        
    for(int i=0;i<n;i++){
        if (numbers[i]==numbers[i+1]){
            counter++;
        }
    }
    cout<<n-counter;
    }

    return 0;
}