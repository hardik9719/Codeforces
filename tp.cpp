#include <iostream>
#include<bits/stdc++.h>
#define log(x) cout<<x<<endl
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
int factorial(int n){
    if(n==1)
    return 1;
    else 
    return n*factorial(n-1);
}
int main(int argc, char** argv){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    // cout<<factorial(5);
    int var = 8;

    int*ptr = &var;
    log(* ptr);

    return 0;
}