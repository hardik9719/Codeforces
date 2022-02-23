#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int n;cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s=="X++"){
            x++;
        }else if(s=="X--"){
            x--;
        }else if(s=="++X"){
            ++x;
        }else if(s=="--X"){
            --x;
        }
    }
        cout<<x<<endl;

    return 0;
}
