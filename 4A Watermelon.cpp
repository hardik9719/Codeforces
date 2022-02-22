#include <iostream>
#include <math.h>
#include <stdio.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    if(n%2==0 && n!=2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
