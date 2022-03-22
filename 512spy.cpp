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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> numbers;
        fo(i,n){
            int temp;cin>>temp;
            numbers.push_back(temp);
        }
        for(int i=0;i<n-1;i++){
            if(numbers[i]!=numbers[i+1]){
                int a_frequency = count(numbers.begin(),numbers.end(),numbers[i]);
                int b_frequency = count(numbers.begin(),numbers.end(),numbers[i+1]);
                if(a_frequency==1){
                    cout<<i+1<<endl;
                    break;
                }else{
                    cout<<i+2<<endl;
                    break;
                }

            }
        }

    }
    return 0;
}