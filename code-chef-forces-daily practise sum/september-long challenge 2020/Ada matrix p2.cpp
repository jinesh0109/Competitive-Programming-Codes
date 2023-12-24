#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }

        int arr1[n-1];
        for(i=1;i<n;i++)
        {
            if(arr[0][i]==i+1)
            {
                arr1[i-1]=1;
            }
            else{
                arr1[i-1]=0;
            }
        }
        int flag=1,c=0;
        /*for(i=0;i<n-1;i++)
        {
            cout<<arr1[i]<<" " ;
        }
        cout<<"\n";*/
        if(arr1[n-2]==0)
        {
            flag=0;
            c++;
        }

        for(i=n-3;i>=0;i--)
        {
            if(flag==0)
            {
                for(j=i;j>=0;j--)
                {
                    if(arr1[j]==1)
                        arr1[j]=0;
                    else
                        arr1[j]=1;
                }
            }
            if(arr1[i]==0)
            {
                flag=0;
                c++;
            }
            else{
                flag=1;
            }
        }
        cout<<c<<endl;
    }

}
