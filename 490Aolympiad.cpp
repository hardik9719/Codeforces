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
    int n;cin>>n;
    vector<int> values;
    vector<int> a_indexes,b_indexes,c_indexes;
    fo(i,n){
        int temp;cin>>temp;
        values.push_back(temp);
        if(temp==1){
            a_indexes.push_back(i+1);
        }else if(temp==2){
            b_indexes.push_back(i+1);
        }else{
            c_indexes.push_back(i+1);
        }
    }
    int t1= count(values.begin(),values.end(),1);
    int t2= count(values.begin(),values.end(),2);
    int t3= count(values.begin(),values.end(),3);
    int min_value=0;
    if(t1<=t2 && t1<=t3){
        min_value = t1;
    }else if(t2<=t1 && t2<=t3){
        min_value = t2;
    }else{
        min_value = t3;
    }
    if(min_value){

        cout<<min_value<<endl;

        
        fo(i,min_value){
            cout<<a_indexes[i]<<" "<<b_indexes[i]<<" "<<c_indexes[i]<<endl;
        }
    }else{
        cout<<0<<endl;
    }
    return 0;
}