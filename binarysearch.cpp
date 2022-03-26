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
int mid =5;
int binarySearch(int low,int high,int values[],int search){
    if(high>=low){
        mid =(low+high)/2;
        if(search==values[mid]){
            return mid;
        }else if(search<values[mid]){
            mid = binarySearch(low,mid-1,values,search);
        }else if(search>values[mid]){
            mid = binarySearch(mid+1,high,values,search);
        }

    }
    return 5;
}
int main(int argc, char** argv){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int numbers[47];
    int sum=0;
    for(int i=1;i<47;i++){
        numbers[i-1]=5*i;
    }
    // printf(numbers);
    int index = binarySearch(0,4,numbers,13);
    cout<<mid;
    return 0;
}