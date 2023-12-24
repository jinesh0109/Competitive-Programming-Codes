#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,tt;
    cin>>t;
    for(tt=1;tt<=t;tt++)
    {
        ll r,c1,i,j;
        cin>>r>>c1;
        ll arr[r][c1];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>arr[i][j];
            }
        }
        ll c=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
               if(arr[i][j]!=0)
               {


                ll up=1,down=1,right=1,left=1,k;

                if(j+1<=c1-1 && arr[i][j+1]==1)
                {
                    for(k=j+1;k<c1;k++)
                    {
                        if(arr[i][k]==1)
                        {
                            right++;
                        }
                        else{
                            break;
                        }
                    }
                }
                if(j-1>=0 && arr[i][j-1]==1)
                {
                    for(k=j-1;k>=0;k--)
                    {
                        if(arr[i][k]==1)
                        {
                            left++;
                        }
                        else{
                            break;
                        }
                    }
                }
                if(i+1<=r-1)
                {
                    if(arr[i+1][j]==1)
                    {
                        for(k=i+1;k<r;k++)
                        {
                            if(arr[k][j]==1)
                            {
                                down++;
                            }
                            else{
                                break;
                            }
                        }
                    }
                }
                if(i-1>=0)
                {
                    if(arr[i-1][j]==1)
                    {
                        for(k=i-1;k>=0;k--)
                        {
                            if(arr[k][j]==1)
                            {
                                up++;

                            }
                            else{
                                break;
                            }
                        }
                    }
                }

                if(up>=2)
                {
                    if(left>=2)
                    {
                        ll min1=min(left,up);
                        if(min1==left)
                        {
                            c+=left/2-1;
                            if(left*2<=up)
                            {
                               min1=left-1;
                            }
                            else{
                                min1=up/2-1;
                            }
                        }
                        else{
                                c+=up/2-1;
                            if(up*2<=left)
                            {
                               min1=up-1;
                            }
                            else{
                                min1=left/2-1;
                            }
                        }
                        c+=min1;
                    }
                 //   cout<<c<<" left after "<<endl;

                    if(right>=2)
                    {
                        ll min1=min(right,up);
                        if(min1==right)
                        {
                            c+=right/2-1;
                            if(right*2<=up)
                            {
                               min1=right-1;
                            }
                            else{
                                min1=up/2-1;
                            }
                        }
                        else{
                                c+=up/2-1;
                            if(up*2<=right)
                            {
                               min1=up-1;
                            }
                            else{
                                min1=right/2-1;
                            }
                        }
                        c+=min1;
                    }
                   // cout<<c<<" right after "<<endl;


                }

                if(down>=2)
                {
                    if(left>=2)
                    {
                        ll min1=min(left,down);
                        if(min1==left)
                        {
                            c+=left/2-1;
                            if(left*2<=down)
                            {
                               min1=left-1;
                            }
                            else{
                                min1=down/2-1;
                            }
                        }
                        else{
                                c+=down/2-1;
                            if(down*2<=left)
                            {
                               min1=down-1;
                            }
                            else{
                                min1=left/2-1;
                            }
                        }
                        c+=min1;
                    }
                    //cout<<c<<" left after "<<endl;

                    if(right>=2)
                    {
                        ll min1=min(right,down);
                        if(min1==right)
                        {
                            c+=right/2-1;
                            if(right*2<=down)
                            {
                               min1=right-1;
                            }
                            else{
                                min1=down/2-1;
                            }

                        }
                        else{
                                c+=down/2-1;
                            if(down*2<=right)
                            {
                               min1=down-1;
                            }
                            else{
                                min1=right/2-1;
                            }
                        }
                        c+=min1;
                    }
                    //cout<<c<<" right after 1"<<endl;

                }






               }
            }
        }
        cout<<"Case #"<<tt<<": "<<c<<endl;
    }
}
