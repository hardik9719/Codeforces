#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>
#define ll long long 
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define printf(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
#define input(n){cin>>n;}
#define fo(i,n) for(int i=0;i<n;i++)
#define intinputvector(){cin>>temp;numbers.push_back(temp);}}
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
    string guest,host,letters;cin>>guest>>host>>letters;
    string answer="";
    string result = guest+host;
    sort(result.begin(),result.end());
    sort(letters.begin(),letters.end());
    if(result==letters)
        cout<<"YES";
    else
        cout<<"NO";
    // set_intersection(result.begin(),result.end(),letters.begin(),letters.end(),back_inserter(answer));
    
    return 0;
}