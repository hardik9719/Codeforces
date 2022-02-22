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
    int counter =0,p=3;
    // cin.ignore()
    vector<int> person;
    for(int i=0;i<n;i++){
        for(int i=0;i<3;i++){

            int temp;
            cin>>temp;
            person.push_back(temp);    

        }
            // print(person);
            int val =count(person.begin(),person.end(),1);
            // cout<<val;
            if(val >=2){
                counter++;
            }
            person.clear();
    }
            cout<<counter<<endl;
    
    return 0;
}
