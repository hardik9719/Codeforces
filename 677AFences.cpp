#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
using namespace std;
auto above(int threshold) {
    return [=](int value) {
        return value > threshold;
    };
};
auto aboveequal(int threshold) {
    return [=](int value) {
        return value >= threshold;
    };
};
int main(int argc, char** argv){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n,h;cin>>n>>h;
    vector<int> persons;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        persons.push_back(temp);
    }
    int passers = count_if(persons.begin(),persons.end(),above(h));

    cout<<n-passers+(passers*2);
    return 0;
}