#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,j,k=s.size();
        int temp=-2,flag=1;
        for(i=0;i<k;i++)
        {
               if(s[i]=='0')
               {

                   if(i-temp>1)
                   {
                //       cout<<i<<" "<<temp<<endl;
                        temp=i;

                   }
                   else{
                    flag=0;
              //      cout<<" "<<endl;
                    break;
                   }

               }
               //cout<<flag<<endl;

        }
        if(flag==1)
        {
            //cout<<"yaha\n";
            cout<<"YES\n";
        }
        else{
            int temp1=-2,flag1=1;
            flag=1;
            for(i=0;i<k;i++)
            {
                flag1=1;
                if(s[i]=='1')
                {
                    if(i-temp1>1)
                    {

                        temp=i;
                        flag=1;
                        for(j=i+1;j<k;j++)
                        {
                            if(s[j]=='0')
                            {
                                if(j-temp>1)
                                {
                                    temp=j;
                                }
                                else{
                                    flag=0;
                                    flag1=0;
                                    break;
                                }

                            }

                        }
                        if(flag==1)
                        {
                            cout<<"YES\n";
                            flag1=0;
                            break;
                        }
                        else{
                            if(i-temp1>1)
                            {
                                temp1=i;
                            }
                            else{
                                cout<<"NO\n";
                                flag1=0;
                                break;
                            }
                        }
                    }
                    else{
                        cout<<"NO\n";
                        flag1=0;
                        break;

                    }
                }
            }
            if(flag1==1)
            {
                cout<<"YES\n";
            }
        }

    }

}
