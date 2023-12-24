#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        char arr[n][m];
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(j=0;j<m;j++)
            {
                arr[i][j]=s[j];
            }
        }
        if(arr[0][0]=='1')
        {

            cout<<"-1\n";
            continue;
        }
        char arr1[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                arr1[i][j]='0';

            }
        }
        vector<vector<int>>v;
        int f=1;

        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                if(i==0 && j==0)
                {

                }
                else{
                    if(arr[i][j]=='1')
                    {
                        if(arr1[i][j-1]=='0' && j!=0)
                        {
                            arr1[i][j]='1';
                            vector<int>v1;
                            v1.push_back(i+1);
                            v1.push_back(j);
                            v1.push_back(i+1);
                            v1.push_back(j+1);
                            v.push_back(v1);
                            v1.clear();
                        }
                        else if(arr1[i-1][j]=='0' && i!=0)
                        {
                            arr1[i][j]='1';
                            vector<int>v1;
                            v1.push_back(i);
                            v1.push_back(j+1);
                            v1.push_back(i+1);
                            v1.push_back(j+1);
                            v.push_back(v1);
                            v1.clear();
                        }
                        else{
                            f=0;
                            break;
                        }
                    }
                }

            }
            if(f==0)
            {
                break;
            }


        }
        if(f==1)
        {
            cout<<v.size()<<endl;
            for(i=0;i<v.size();i++)
            {
                for(j=0;j<v[i].size();j++)
                {
                    cout<<v[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        else{
        //    cout<<"error6\n//";
            cout<<"-1\n";
            continue;
        }
    }
}
