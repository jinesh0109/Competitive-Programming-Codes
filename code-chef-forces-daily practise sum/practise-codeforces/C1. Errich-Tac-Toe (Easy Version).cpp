#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n][n];
        int i,j;
        int c=0,c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='X')
                {
                    if((i+j+2)%3==1)
                    {
                        c++;
                    }
                    else if((i+j+2)%3==2)
                    {
                        c1++;
                    }
                    else{
                        c2++;
                    }
                }
            }
        }
        int min1=min(c,min(c1,c2));
        int result;
        if(min1==c)
            result=1;
        else if(min1==c1)
            result=2;
        else
            result=0;
        for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(arr[i][j]=='X')
                    {
                        if((i+j+2)%3==result)
                        {
                            arr[i][j]='O';
                        }
                    }
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                   cout<<arr[i][j];
                }
                cout<<"\n";
            }
            cout<<"\n";



    }
}
