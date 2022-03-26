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
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;cin>>n;
    int k;cin>>k;
    int counter =0,p=3;
    // cin.ignore()
    vector<int> person;
    for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            person.push_back(temp);    

        }
    // print(person);
    // cout<<person[k-1]<<endl;
    int passers = count_if(person.begin(),person.end(),above(person[k-1]));
    cout<<passers<<endl;
    return 0;
}