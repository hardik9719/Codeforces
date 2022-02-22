#include <iostream>
#include <math.h>
#include <stdio.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
    if(s.length()>10){
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
    }else{
        cout<<s<<"\n";
    }
    }
    
    return 0;
}
