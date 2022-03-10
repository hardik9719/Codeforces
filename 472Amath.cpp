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
bool is_Prime(int n){
    bool is_prime = true;
    for (int i = 2; i <= n/2; ++i) {
            if (n % i == 0 ) {
            is_prime = false;
            break;
            }
        }
    return is_prime;
}
int main(int argc, char** argv){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int number;cin>>number;
    bool composite = false;
    bool is_prime=true;
    int a=0,b=0;
    for(int i=4;i<number;i+=2){
        a= i;
        b= number-a;
        if(!is_Prime(a) && !is_Prime(b)){
            break;
        }

    }
    cout<<a<<" "<<b<<endl;
    // cout<<"Hdsd";

    
    return 0;
}