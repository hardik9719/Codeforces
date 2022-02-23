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
    int numbers[n];
    int counter =0,p=3;
    // cin.ignore()
    vector<int> person;
    for(int i=01;i<=n;i++){
            cin>>numbers[i];   

        }
    for(int i=1;i<=n;i++){
        if(numbers[i]>=numbers[k] && numbers[i]!=0)
        counter++;
    }
    // print(person);
    // cout<<person[k-1]<<endl;
    // int passers = count_if(person.begin(),person.end(),above(person[k-1]));
    // cout<<passers<<endl;
    cout<<counter<<endl;
    return 0;
}
