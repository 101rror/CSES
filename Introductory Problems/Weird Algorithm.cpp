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

    vector<long>a;
    a.pb(n);

    while(n != 1)
    {
        if(n % 2 != 0)
        {
            n = n * 3 + 1;
            a.pb(n);
        }
        else
        {
            n = n / 2;
            a.pb(n);
        }
    }

    for(auto it : a)
    {
        cout << it << " ";
    }
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
