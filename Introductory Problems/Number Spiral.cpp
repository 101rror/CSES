///There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

using namespace std;

#define  FastRead  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  Executed  return 0;
#define  nl        cout << "\n";

#define  srt(s)    sort(s.begin(),s.end());
#define  rsrt(s)   sort(s.rbegin(),s.rend());
#define  rvs(s)    reverse(s.begin(), s.end());

#define  long      long long
#define  fi        first
#define  se        second
#define  pb        push_back



void solution()
{
    long y, x;
    cin >> y >> x;

    long ans = 0;

    if(y > x)
    {
        ans = (y - 1) * (y - 1);

        if(y & 1)
        {
            ans += x;
        }
        else
        {
            ans += (2 * y - x);
        }
    }
    else
    {
        ans = (x - 1) * (x - 1);

        if(x & 1)
        {
            ans += (2 * x - y);
        }
        else
        {
            ans += y;
        }
    }

    cout << ans;
    nl
}


int32_t main()
{
    FastRead

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        solution();
    }

    Executed
}
