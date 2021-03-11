#include <bits/stdc++.h>
using namespace std;
#define ll long long

string lcp(string s[], int lo, int hi)
{
    if (lo == hi)
        return (s[hi]);

    if (hi > lo)
    {
        int mid = lo + (hi - lo) / 2;

        string str1 = lcp(s, lo, mid);
        string str2 = lcp(s, mid + 1, hi);
        string res;
        ll n1 = str1.size(), n2 = str2.size();
        ll sz;
        if (n1 <= n2)
            sz = n1;
        else
            sz = n2;
        for (int i = 0; i < sz; i++)
        {
            if (str1[i] == str2[i])
            {
                res.push_back(str1[i]);
            }
            else
                break;
        }
        return res;
    }
}

int main()
{
    ll n;
    cin >> n;
    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    string ans = lcp(s, 0, n - 1);

    if (ans.length())
        cout << "The longest common prefix is " << ans;
    else
        cout << "There is no common prefix";
    return (0);
}
