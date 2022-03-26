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
    double n;cin>>n;
    vector<int> numbers;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        numbers.push_back(temp);
    }
    double result =accumulate(numbers.begin(),numbers.end(),0)/n;
    printf("%.10g",result);
    // double num = 3.12135465;
    // cout<<num<<endl;
    // cout<<22/7<<setprecision(5);
    return 0;
}