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
    int n,k;cin>>n>>k;
    int time_remaining = 240-k;
    int i=1,count=0;
    int numbers[47];
    int sum=0;
    fo(i,47){
        numbers[i-1]=5*i;
    }
       for(i=0;i<n;i++){
           sum+=numbers[i];
           if(sum>time_remaining)
           break;
           count++;
       }

  
    cout<<count;
    
    return 0;
}