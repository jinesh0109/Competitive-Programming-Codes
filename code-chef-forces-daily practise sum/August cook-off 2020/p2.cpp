#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
  while(t--)
  {
     long long int n,i,a,b;
     cin>>n;
     for(i=0;i<n;i++)
     {
        cin>>a>>b;
     }
     long long int sum=0;
     while(n>=3)
     {
        sum+=n;
        if(n>4)
            n=n/2;
        else
            break;
     }
      cout<<sum<<endl;
   }

}
