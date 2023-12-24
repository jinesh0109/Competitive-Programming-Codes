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
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        double arr1[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)arr1[i][j]=0;
                else if((i>j && arr[j]>arr[i]) || (i<j && arr[j]<arr[i]))
                {
                    arr1[i][j]=double(abs(i-j))/(double(abs(arr[j]-arr[i])));
                }
                else{
                    arr1[i][j]=-1;
                }
            }
        }
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<arr1[i][j]<<" ";
            }
            cout<<"\n";
        }*/
        set<double>s,s1;
        int k,max1=0,min1=6;
        for(i=0;i<n;i++)
        {
            s.insert(i);
            for(j=0;j<n;j++)
            {
                if(arr1[i][j]!=-1)
                {
                    s.insert(j);
                    for(k=0;k<n;k++)
                    {
                        if(arr1[j][k]>=arr1[i][j])
                        {
                           s.insert(k);
                        }
                    }
                }
            }
            if(s.size()>max1)
                max1=s.size();
            if(s.size()<min1)
                min1=s.size();
            s.clear();
        }
        cout<<min1<<" "<<max1<<"\n";

    }

}
