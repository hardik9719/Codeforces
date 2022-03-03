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
    int n,m;cin>>n>>m;
    string grid[n][m]={"a"};
    int flag = true;
    fo(i,n){
        fo(j,m){
            grid[i][j]=".";
        }
        // cout<<endl;
    }
    fo(i,n){
        fo(j,m){
            if(i%2==0){
                grid[i][j]="#";
            }else{
                if(flag){
                    grid[i][m-1]="#";
                    flag=false;
                    break;
                }else{
                    grid[i][0]="#";
                    flag=true;
                    break;

                }
            }
        }
        // cout<<endl;
    }

    fo(i,n){
        fo(j,m){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}