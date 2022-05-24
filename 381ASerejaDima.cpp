#include <iostream>
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define ll long long

#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define printf(x)               \
    {                           \
        for (auto ait : x)      \
            cout << ait << " "; \
        cout << "\n";           \
    }
#define input(n)  \
    {             \
        cin >> n; \
    }
#define fo(i, n) for (int i = 0; i < n; i++)
auto above(int threshold)
{
    return [=](int value)
    {
        return value >= threshold;
    };
};

int main(int argc, char **argv)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    vector<int> values;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        values.push_back(temp);
    }
    // printf(values);
    int sereja = 0;
    int dima = 0;
    bool sereja_turn = true;
    // auto it = values.begin();
    // cout<<&it<<endl;
    // cout<<*it<<endl;
    // it++;
    // cout<<&it<<endl;
    // cout<<*it;
    // values.pop_back();
    // printf(values);

    while (1)
    {
        if (sereja_turn)
        {
            if (values.back() > values.front())
            {
                // cout << "last";
                sereja += values.back();
                values.pop_back();
            }
            else
            {
                sereja += values.front();
                values.erase(values.begin());
            }
            sereja_turn = !sereja_turn;
        }
        else
        {
            if (values.back() > values.front())
            {
                dima += values.back();
                values.pop_back();
            }
            else
            {
                dima += values.front();
                values.erase(values.begin());
            }
            sereja_turn = !sereja_turn;
        }
        if (values.size() == 0)
        {
            break;
        }
    }
    cout << sereja << " " << dima << endl;

    return 0;
}