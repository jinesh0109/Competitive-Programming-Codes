#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,diff;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                diff=abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<diff;
}
