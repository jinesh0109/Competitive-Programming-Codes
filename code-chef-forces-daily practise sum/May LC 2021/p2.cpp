#include<bits/stdc++.h>
#define ll long long int
#include<vector>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int i,j;
        string a,b,c;
        cin>>a>>b>>c;
        ll cX=0,cO=0,cdash=0;
        for(i=0;i<3;i++)
        {
            if(a[i]=='X')
                cX++;
            if(b[i]=='X')
                cX++;
            if(c[i]=='X')
                cX++;
            if(a[i]=='O')
                cO++;
            if(b[i]=='O')
                cO++;
            if(c[i]=='O')
                cO++;
            if(a[i]=='_')
                cdash++;
            if(b[i]=='_')
                cdash++;
            if(c[i]=='_')
                cdash++;
        }
        if(cO>cX)
        {
            cout<<"3\n";
            //cout<<"HERE1";
            continue;
        }
        if(abs(cO-cX)>1)
        {
            cout<<"3\n";
            //cout<<"HERE2";
            continue;
        }
        int c1=0;
        if((a[0]=='X'||a[0]=='O') && (a[0]==a[1] && a[1]==a[2]))
            c1++;
        if((b[0]=='X'||b[0]=='O') && (b[0]==b[1] && b[1]==b[2]))
            c1++;
        if((c[0]=='X'||c[0]=='O') && (c[0]==c[1] && c[1]==c[2]))
            c1++;
        if( (a[0]=='X'||a[0]=='O') && (a[0]==b[0] && b[0]==c[0]))
            c1++;
        if( (a[1]=='X'||a[1]=='O') && (a[1]==b[1] && b[1]==c[1]))
            c1++;
        if( (a[2]=='X'||a[2]=='O') && (a[2]==b[2] && b[2]==c[2]))
            c1++;
        if( (a[0]=='X'||a[0]=='O') && (a[0]==b[1] && b[1]==c[2]))
            c1++;
        if((a[2]=='X'||a[2]=='O') && (a[2]==b[1] && b[1]==c[0]))
            c1++;
        //cout<<c1<<endl;
        vector<int>v;
        int flag1=1;
        //cout<<c1<<endl;
        if(c1==2)
        {
            int c3=0;
            if(a[0]=='X' && a[1]=='X' && a[2]=='X')
            {
                v.push_back(11);
                v.push_back(12);
                v.push_back(13);
                c3++;

            }
            if(b[0]=='X' && b[1]=='X' && b[2]=='X')
            {
                v.push_back(21);
                v.push_back(22);
                v.push_back(23);
                c3++;
            }
            if(c[0]=='X' && c[1]=='X' && c[2]=='X')
            {
                v.push_back(31);
                v.push_back(32);
                v.push_back(33);
                c3++;
            }
            if(a[0]=='X' && b[0]=='X' && c[0]=='X')
            {
                v.push_back(11);
                v.push_back(21);
                v.push_back(31);
                c3++;
            }
            if(a[1]=='X' && b[1]=='X' && c[1]=='X')
            {
                v.push_back(12);
                v.push_back(22);
                v.push_back(32);
                c3++;
            }
            if(a[2]=='X' && b[2]=='X' && c[2]=='X')
            {
                v.push_back(13);
                v.push_back(23);
                v.push_back(33);
                c3++;
            }
            if(a[0]=='X' && b[1]=='X' && c[2]=='X')
            {
                v.push_back(11);
                v.push_back(22);
                v.push_back(33);
                c3++;
            }
            if(a[2]=='X' && b[1]=='X' && c[0]=='X')
            {
                v.push_back(13);
                v.push_back(22);
                v.push_back(31);
                c3++;
            }
            //for(int z=0;z<v.size();z++)
            //{
            //    cout<<v[z]<<" ";
            //}
            //cout<<"\n";
            //cout<<c3<<endl;
            if(c3==2)
            {
                int k,l,flag=1;
                for(k=0;k<v.size();k++)
                {
                    for(l=0;l<v.size();l++)
                    {
                        if(k!=l)
                        {
                            if(v[k]==v[l])
                            {
                                flag=0;
                                break;

                            }
                        }
                    }
                    if(flag==0)
                        break;
                }
                if(flag==0)
                {
                    cout<<"1\n";
                    flag1=0;
                    continue;
                }
            }

         if(flag1==1)
        {
            cout<<"3\n";
            //cout<<"HERE4";
            continue;
        }
    }


        if(c1==1)
        {
            int c4=0;

            if((a[0]=='X') && (a[0]==a[1] && a[1]==a[2]))
                c4++;
            if((b[0]=='X') && (b[0]==b[1] && b[1]==b[2]))
                c4++;
            if((c[0]=='X') && (c[0]==c[1] && c[1]==c[2]))
                c4++;
            if( (a[0]=='X') && (a[0]==b[0] && b[0]==c[0]))
                c4++;
            if( (a[1]=='X') && (a[1]==b[1] && b[1]==c[1]))
                c4++;
            if( (a[2]=='X') && (a[2]==b[2] && b[2]==c[2]))
                c4++;
            if( (a[0]=='X') && (a[0]==b[1] && b[1]==c[2]))
                c4++;
            if((a[2]=='X') && (a[2]==b[1] && b[1]==c[0]))
                c4++;
            if(c4==1)
            {
                if(cX<=cO)
                {
                    cout<<"3\n";
                    //cout<<"HERE";
                    continue;
                }
            }



             c4=0;

            if((a[0]=='O') && (a[0]==a[1] && a[1]==a[2]))
                c4++;
            if((b[0]=='O') && (b[0]==b[1] && b[1]==b[2]))
                c4++;
            if((c[0]=='O') && (c[0]==c[1] && c[1]==c[2]))
                c4++;
            if( (a[0]=='O') && (a[0]==b[0] && b[0]==c[0]))
                c4++;
            if( (a[1]=='O') && (a[1]==b[1] && b[1]==c[1]))
                c4++;
            if( (a[2]=='O') && (a[2]==b[2] && b[2]==c[2]))
                c4++;
            if( (a[0]=='O') && (a[0]==b[1] && b[1]==c[2]))
                c4++;
            if((a[2]=='O') && (a[2]==b[1] && b[1]==c[0]))
                c4++;
            if(c4==1)
            {
                if(cX>cO)
                {
                    cout<<"3\n";
                    //cout<<"HERE";
                    continue;
                }
            }



            cout<<"1\n";
            continue;
        }
        if(c1==0 && cdash==0)
        {
            cout<<"1\n";
            continue;
        }

            cout<<"2\n";


    }
}
