#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define vi vector<int>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    // Second branch: Process with while loop
    while(n > 0) {
        cout << "Current: " << n << endl;
        n--;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}