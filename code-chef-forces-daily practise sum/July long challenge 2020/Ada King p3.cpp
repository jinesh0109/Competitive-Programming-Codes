#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i,j;
        cin>>k;
        char arr[8][8];
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                arr[i][j]='X';
            }
        }
        arr[0][0]='O';
        int c=1;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
               if(i==0 && j==0)
               {
                   continue;
                }
                else{
                    if(k>c)
                   {
                       arr[i][j]='.';
                       c++;
                   }
                   else{
                    break;
                   }
                }
            }
            if(k<=c)
                break;
        }

        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
