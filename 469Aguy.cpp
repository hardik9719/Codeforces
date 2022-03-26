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
// #define intinputvector(x){int temp;cin>>temp;x.push_back(temp);}
#define intinputvector(x,value){x.push_back(value);}
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
    int p;cin>>p;
    vector<int> p_levels,q_levels,result;
    fo(i,p){
        int temp;cin>>temp;
        p_levels.push_back(temp);
    }
    int q;cin>>q;
    fo(i,q){
        int temp;cin>>temp;
        q_levels.push_back(temp);
    }
    sortall(p_levels);
    sortall(q_levels);
    set_union(all(p_levels),all(q_levels),back_inserter(result));

    if(result.size()==n)
    cout<<"I become the guy."<<endl;
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}