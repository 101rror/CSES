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

    vector<long>even, odd;

    if(n == 1)
    {
        cout << "1";
        nl
        return;
    }
    if(n < 4)
    {
        cout << "NO SOLUTION";
        nl
        return;
    }

    for(long i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            even.pb(i);
        }
        else
        {
            odd.pb(i);
        }
    }

    for(auto it : even)
    {
        cout << it << " ";
    }
    for(auto it : odd)
    {
        cout << it << " ";
    }
    nl
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
