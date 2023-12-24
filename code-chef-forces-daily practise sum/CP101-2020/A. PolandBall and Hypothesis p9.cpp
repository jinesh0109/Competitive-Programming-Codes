#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    if(n==1)
        cout<<"3\n";
    else if(n%2==1)
        cout<<"1\n";
    else{

        for(i=1;i<=n*2;i++)
        {
            for(j=2;j<=sqrt(n*i+1);j++)
            {
                if((n*i+1)%j==0)
                {

                    cout<<i<<endl;

                    return 0;
                }
            }
        }
    }
}
