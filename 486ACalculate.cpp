#include <iostream>
#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>

#define print(x){for(auto ait:x) cout << ait << " "; cout << "\n";}

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
    long long int n;cin>>n;
    long long int oddsum=0;
    long long int evensum=0;
    if(n==1){
        cout<<-1<<endl;
    }else if(n%2==0){
        long long int oddcount = n/2;
        long long int evencount =n/2;
        oddsum=(oddcount*(2*(-1)+(oddcount-1)*(-2)))/2;
        evensum=(evencount*(2*(2)+(evencount-1)*(2)))/2;
        long long int result = evensum+oddsum;
        cout<<result<<endl;
    }else{
        long long int  oddcount = n/2+1;
        long long int evencount =n/2;
        oddsum=(oddcount*(2*(-1)+(oddcount-1)*(-2)))/2;
        evensum=(evencount*(2*(2)+(evencount-1)*(2)))/2;
        long long int result = evensum+oddsum;
        cout<<result<<endl;
    }
    
    // if(n==1){
    //     cout<<-1;
    // }
    // else if(n%2==0){
    //     cout<<n/2;
    // }else{
    //     cout<<((n/2)+1)*(-1);
    // }
    
    return 0;
    // 1000000000000000
    // 500000000000000


    

}