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
    string s;
    cin >> s;

    long ans = 0, count = 1;

    for(long i = 1; i < s.size(); i++)
    {
        if(s[i - 1] == s[i])
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }

    ans = max(ans, count);

    cout << ans;
    nl
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
