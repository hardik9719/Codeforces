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
    int counter =0;
    vector<int> numbers;
    int n,temp;cin>>n;
    fo(i,n){
        cin>>temp;numbers.push_back(temp);
    }
    auto maxelementindex = max_element(all(numbers))-numbers.begin();
    auto maxelement = *max_element(all(numbers));
    while(numbers[0]!=maxelement){
        int temp=numbers[maxelementindex-1];
        numbers[maxelementindex-1]=numbers[maxelementindex];
        numbers[maxelementindex]=temp;
        maxelementindex = max_element(all(numbers))-numbers.begin();
        counter++;
        // printf(numbers);

    }
    auto minelementindex = min_element(numbers.rbegin(),numbers.rend())-numbers.rbegin();
    auto minelement = *min_element(numbers.rbegin(),numbers.rend());
    cout<<minelementindex+counter;
   


  
    return 0;
}