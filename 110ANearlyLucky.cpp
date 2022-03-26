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
    string s;
    cin>>s;
    int fours = count(s.begin(),s.end(),'4');
    int sevens = count(s.begin(),s.end(),'7');
    if(fours+sevens==4 || fours+sevens==7)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}