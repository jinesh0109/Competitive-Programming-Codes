#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t = 1;
  cin>>t;

  while (t--)
  {
    string ans = "";
    string s;
    cin>>s;

    int maxi = -1;
    int n=s.size();
    int f=0;
    int indi = -1;
    for (int i = 0; i < n - 1; i++)
    {
      string z = "";
      z += s[i];
      z += s[i + 1];
      //int tp = sum(z);
      int tp =int(z[0] - '0') + int(z[1] - '0');

      maxi = tp;
      string y1 = to_string(tp);

      if (y1.size() == 2)
      {
        indi = i;
        f = 1;
      }
    }
    if (f == 1)
    {
      string z = "";
      z += s[indi];
      z += s[indi + 1];
      //int tp = sum(z);
      int tp = int(z[0] - '0') + int(z[1] - '0');

      maxi = tp;
      string y2 = to_string(tp);
      ans = s.substr(0, indi) + y2 + s.substr(indi + 2);
      cout<<ans<<endl;
    }
    else
    {

      string z = "";
      z += s[0];
      z += s[1];
      //int tp = sum(z);
      int tp = int(z[0] - '0') + int(z[1] - '0');

      string y3 = to_string(tp);
      ans = y3+ s.substr(2);
      f = 1;

      cout<<(ans)<<endl;
    }
  }
  return 0;
}
