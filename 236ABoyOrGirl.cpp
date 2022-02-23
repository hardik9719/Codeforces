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
    sort(s.begin(),s.end());
    int counter=1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
            counter++;
        }
    }
    if(counter%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    // unordered_set<char> characters(s.begin(),s.end());
    // // cout<<characters.size()<<endl;
    // // print(characters);
    // cout<<s.length();
    // cout<<characters.size();
    // if(characters.size()%2==0){
    //     cout<<"CHAT WITH HER!";
    // }else{
    //     cout<<"IGNORE HIM!";
    // }

    return 0;
}