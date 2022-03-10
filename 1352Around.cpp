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
    vector<string> numbers;
    while(t--){
        string s;cin>>s;
        int number = stoi(s);
        int j=0;
        int counter =0;
        for(int i= s.length();i>=1;i--){
            if(s[j]!='0'){
                // cout<<s[i]-'0';
                // numbers.push_back((int)(s[j]-'0'));
                // int mod = pow(10,i-1);
                // int result = (int)number%mod;
                string name(i-1,'0');
                numbers.push_back((s[j]+name));
                counter++;
            }
                j++;

        }
        cout<<numbers.size()<<endl;
        printf(numbers);
        numbers.clear();
        
    }
    
    return 0;
}