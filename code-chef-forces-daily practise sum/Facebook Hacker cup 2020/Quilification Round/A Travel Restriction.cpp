#include<bits/stdc++.h>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    freopen("input.txt","r",stdin);
    freopen("output.txt","wb",stdout);
    for(k=1;k<=t;k++)
    {
        int n,row,col;
        cin>>n;
        string a,b;
        cin>>a>>b;
        char arr[n][n];
        for(row=1;row<=n;row++)
        {
            for(col=row;col<=n;col++)
            {
                if(row==col)
                {
                    arr[row-1][col-1]='Y';
                }
                else if(abs(row-col)==1)
                {
                    if(b[row-1]=='Y')
                    {
                        if(a[col-1]=='Y')
                        {
                            arr[row-1][col-1]='Y';
                        }
                        else{
                            arr[row-1][col-1]='N';
                        }
                    }
                    else{
                        arr[row-1][col-1]='N';
                    }
                }
                else if(abs(row-col)>1)
                {

                        if(arr[row-1][col-2]=='Y')
                        {
                            if(b[col-2]=='Y')
                            {
                                if(a[col-1]=='Y')
                                {
                                    arr[row-1][col-1]='Y';
                                }
                                else{
                                    arr[row-1][col-1]='N';
                                }
                            }
                            else{
                                    arr[row-1][col-1]='N';
                            }
                        }
                        else{
                            arr[row-1][col-1]='N';
                        }


                }
            }
        }
            for(row=1;row<=n;row++)
            {
                for(col=row;col>=1;col--)
                {
                    if(row!=col)
                    {
                      if(abs(row-col)==1)
                      {
                        if(b[row-1]=='Y')
                            {
                                if(a[col-1]=='Y')
                                {
                                    arr[row-1][col-1]='Y';
                                }
                                else{
                                arr[row-1][col-1]='N';
                                }
                            }
                        else{
                            arr[row-1][col-1]='N';
                            }
                        }
                        else if(abs(row-col)>1)
                        {
                             if(arr[row-1][col]=='Y')
                            {
                                if(b[col]=='Y')
                                {
                                    if(a[col-1]=='Y')
                                    {
                                        arr[row-1][col-1]='Y';
                                    }
                                    else{
                                        arr[row-1][col-1]='N';
                                    }
                                }
                                else{
                                    arr[row-1][col-1]='N';
                                }
                            }
                            else{
                                arr[row-1][col-1]='N';
                            }

                        }
                    }
                }
            }
            cout<<"Case #"<<k<<":\n";
            for(row=0;row<n;row++)
            {
                for(col=0;col<n;col++)
                {
                    cout<<arr[row][col];
                }
                cout<<"\n";
            }

    }

}
