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
        int pointer =0;
        bool flag= false;
        vector<int> numbers;
        fo(i,n){
            
            int temp;cin>>temp;
            numbers.push_back(temp);
        }
        if(n>1){

            sort(numbers.begin(),numbers.end());
            fo(i,numbers.size()-1){
                if(abs(numbers[i]-numbers[i+1])<=1){
                    int min_value = min(numbers[i],numbers[i+1]);
                    auto min_value_index = find(numbers.begin(),numbers.end(),min_value);
                    numbers.erase(numbers.begin()+distance(numbers.begin(),min_value_index));
                i=-1;
                }
                // if(pointer==n-1){

                // flag=true;
                // break;
                // }
            }
        }else{
            flag=true;
        }
        if(numbers.size()==1)
        flag=true;

        if(flag){

        cout<<"YES"<<endl;
        // for(auto ait:numbers) 
        // cout << ait << " "; cout << "\n";
        }
        else
        cout<<"NO"<<endl;
        numbers.clear();
    }
    
    return 0;
}