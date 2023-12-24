#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
      long long int m;
      cin>>m;
      if((m*(m+1)/2)%2==1)
      {
          cout<<"0\n";
          continue;
      }
      double t=sqrt(1+4*(double)((m*(m+1))/2));
      double f1=(t-1)/2;
      double f=floor(f1);
      long long int ans=(long long int)(f);
      if(f1!=f)
      {

        cout<<m-ans<<endl;;
      }
      else{
        cout<<((ans*(ans-1))/2) + (((m-ans)*(m-ans-1))/2)+(m-ans)<<endl;
      }
    }
}
