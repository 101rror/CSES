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
    long n;
    cin >> n;

    vector<long>a(n - 1);

    for(auto &it : a)
    {
        cin >> it;
    }

    srt(a)

    for(long i = 1; i <= n; i++)
    {
        if(i != a[i - 1])
        {
            cout << i;
            nl
            return;
        }
    }
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
