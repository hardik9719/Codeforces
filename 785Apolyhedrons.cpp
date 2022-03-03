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
    int faces=0;
    fo(i,n){
        string temp;cin>>temp;
        if(temp=="Tetrahedron"){
            faces+=4;
        }else if(temp=="Cube"){
            faces+=6;
        }else if(temp=="Octahedron"){
            faces+=8;
        }else if(temp=="Dodecahedron"){
            faces+=12;
        }else if(temp=="Icosahedron"){
            faces+=20;
        }
    }
    cout<<faces;
    
    return 0;
}