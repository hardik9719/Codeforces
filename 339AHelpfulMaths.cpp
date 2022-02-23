#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    string s;cin>>s;
    vector<int> numbers;
    for(auto i:s){
        if(i!='+'){
            numbers.push_back(i-'0');
        }
    }
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<numbers.size();i++){
        if(i!=numbers.size()-1){
        cout<<numbers[i]<<"+";
        }
        else{
            cout<<numbers[i];
        }
    }
    return 0;
}