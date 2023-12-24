#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        ll i,j,k,l,m,n,p,q,r;
        if(x==x1 && y==y1)
        {
            cout<<"0\n";
            continue;
        }
        ll cost=0,min1=10;
        ll tx1,ty1,tx2,ty2,tx3,ty3,tx4,ty4,tx5,ty5,tx6,ty6,tx7,ty7,tx8,ty8,tx9,ty9;
        for(i=1;i<=4;i++)
        {
            cost=1;
            if(i==1)
            {
                tx1=x+2*y;
                ty1=y;
            }
            else if(i==2)
            {
                tx1=x-2*y;
                ty1=y;
            }
            else if(i==3)
            {
                if(y+2*x>0)
                {
                    tx1=x;
                    ty1=y+2*x;
                }
                else{
                    tx1=-x;
                    ty1=-y-(2*x);
                }
            }
            else {
                if(y-2*x>0)
                {
                    tx1=x;
                    ty1=y-2*x;
                }
                else{
                    tx1=-x;
                    ty1=-y+(2*x);
                }
            }
            if(tx1==x1 && ty1==y1)
            {
                min1=min(cost,min1);
                break;
            }
            for(j=1;j<=4;j++)
            {
                cost=2;
                if(j==1)
                {
                    tx2=tx1+2*ty1;
                    ty2=ty1;
                }
                else if(j==2)
                {
                    tx2=tx1-2*ty1;
                    ty2=ty1;
                }
                else if(j==3)
                {
                    if(ty1+2*tx1>0)
                    {
                        tx2=tx1;
                        ty2=ty1+2*tx1;
                    }
                    else{
                        tx2=-tx1;
                        ty2=-ty1-(2*tx1);
                    }
                }
                else {
                    if(ty1-2*tx1>0)
                    {
                        tx2=tx1;
                        ty2=ty1-2*tx1;
                    }
                    else{
                        tx2=-tx1;
                        ty2=-ty1+(2*tx1);
                    }
                }
                if(tx2==x1 && ty2==y1)
                {
                    min1=min(cost,min1);
                    break;
                }

                for(k=1;k<=4;k++)
                {

                    cost=3;
                    if(k==1)
                    {
                        tx3=tx2+2*ty2;
                        ty3=ty2;
                    }
                    else if(k==2)
                    {
                        tx3=tx2-2*ty2;
                        ty3=ty2;
                    }
                    else if(k==3)
                    {
                        if(ty2+2*tx2>0)
                        {
                            tx3=tx2;
                            ty3=ty2+2*tx2;
                        }
                        else{
                            tx3=-tx2;
                            ty3=-ty2-(2*tx2);
                        }
                    }
                    else {
                        if(ty2-2*tx2>0)
                        {
                            tx3=tx2;
                            ty3=ty2-2*tx2;
                        }
                        else{
                            tx3=-tx2;
                            ty3=-ty2+(2*tx2);
                        }
                    }
                    if(tx3==x1 && ty3==y1)
                    {
                        min1=min(cost,min1);
                        break;
                    }
                    for(l=1;l<=4;l++)
                    {
                        cost=4;
                        if(l==1)
                        {
                            tx4=tx3+2*ty3;
                            ty4=ty3;
                        }
                        else if(l==2)
                        {
                            tx4=tx3-2*ty3;
                            ty4=ty3;
                        }
                        else if(l==3)
                        {
                            if(ty3+2*tx3>0)
                            {
                                tx4=tx3;
                                ty4=ty3+2*tx3;
                            }
                            else{
                                tx4=-tx3;
                                ty4=-ty3-(2*tx3);
                            }
                        }
                        else {
                            if(ty3-2*tx3>0)
                            {
                                tx4=tx3;
                                ty4=ty3-2*tx3;
                            }
                            else{
                                tx4=-tx3;
                                ty4=-ty3+(2*tx3);
                            }
                        }
                        if(tx4==x1 && ty4==y1)
                        {
                            min1=min(cost,min1);
                            break;
                        }
                        for(m=1;m<=4;m++)
                        {
                            cost=5;
                            if(m==1)
                            {
                                tx5=tx4+2*ty4;
                                ty5=ty4;
                            }
                            else if(m==2)
                            {
                                tx5=tx4-2*ty4;
                                ty5=ty4;
                            }
                            else if(m==3)
                            {
                                if(ty4+2*tx4>0)
                                {
                                    tx5=tx4;
                                    ty5=ty4+2*tx4;
                                }
                                else{
                                    tx5=-tx4;
                                    ty5=-ty4-(2*tx4);
                                }
                            }
                            else     {
                                if(ty4-2*tx4>0)
                                {
                                    tx5=tx4;
                                    ty5=ty4-2*tx4;
                                }
                                else{
                                    tx5=-tx4;
                                    ty5=-ty4+(2*tx4);
                                }
                            }
                            if(tx5==x1 && ty5==y1)
                            {
                                min1=min(cost,min1);
                                break;
                            }
                            for(n=1;n<=4;n++)
                            {
                                cost=6;
                                if(n==1)
                                {
                                    tx6=tx5+2*ty5;
                                    ty6=ty5;
                                }
                                else if(n==2)
                                {
                                    tx6=tx5-2*ty5;
                                    ty6=ty5;
                                }
                                else if(n==3)
                                {
                                    if(ty5+2*tx5>0)
                                    {
                                        tx6=tx5;
                                        ty6=ty5+2*tx5;
                                    }
                                    else{
                                        tx6=-tx5;
                                        ty6=-ty5-(2*tx5);
                                    }
                                }
                                else     {
                                    if(ty5-2*tx5>0)
                                    {
                                        tx6=tx5;
                                        ty6=ty5-2*tx5;
                                    }
                                    else{
                                        tx6=-tx5;
                                        ty6=-ty5+(2*tx5);
                                    }
                                }
                                if(tx6==x1 && ty6==y1)
                                {
                                    min1=min(cost,min1);
                                    break;
                                }
                                for(p=1;p<=4;p++)
                                {
                                    cost=7;
                                    if(p==1)
                                    {
                                        tx7=tx6+2*ty6;
                                        ty7=ty6;
                                    }
                                    else if(p==2)
                                    {
                                        tx7=tx6-2*ty6;
                                        ty7=ty6;
                                    }
                                    else if(p==3)
                                    {
                                        if(ty6+2*tx6>0)
                                        {
                                            tx7=tx6;
                                            ty7=ty6+2*tx6;
                                        }
                                        else{
                                            tx7=-tx6;
                                            ty7=-ty6-(2*tx6);
                                        }
                                    }
                                    else     {
                                        if(ty6-2*tx6>0)
                                        {
                                            tx7=tx6;
                                            ty7=ty6-2*tx6;
                                        }
                                        else{
                                            tx7=-tx6;
                                            ty7=-ty6+(2*tx6);
                                        }
                                    }
                                    if(tx7==x1 && ty7==y1)
                                    {
                                        min1=min(cost,min1);
                                        break;
                                    }
                                    for(q=1;q<=4;q++)
                                    {
                                        cost=8;
                                        if(q==1)
                                        {
                                            tx8=tx7+2*ty7;
                                            ty8=ty7;
                                        }
                                        else if(q==2)
                                        {
                                            tx8=tx7-2*ty7;
                                            ty8=ty7;
                                        }
                                        else if(q==3)
                                        {
                                            if(ty7+2*tx7>0)
                                            {
                                                tx8=tx7;
                                                ty8=ty7+2*tx7;
                                            }
                                            else{
                                                tx8=-tx7;
                                                ty8=-ty7-(2*tx7);
                                            }
                                        }
                                        else     {
                                            if(ty7-2*tx7>0)
                                            {
                                                tx8=tx7;
                                                ty8=ty7-2*tx7;
                                            }
                                            else{
                                                tx8=-tx7;
                                                ty8=-ty7+(2*tx7);
                                            }
                                        }
                                        if(tx8==x1 && ty8==y1)
                                        {
                                            min1=min(cost,min1);
                                            break;
                                        }
                                        for(r=1;r<=4;r++)
                                        {
                                            cost=9;
                                            if(r==1)
                                            {
                                                tx9=tx8+2*ty8;
                                                ty9=ty8;
                                            }
                                            else if(r==2)
                                            {
                                                tx9=tx8-2*ty8;
                                                ty9=ty8;
                                            }
                                            else if(r==3)
                                            {
                                                if(ty8+2*tx8>0)
                                                {
                                                    tx9=tx8;
                                                    ty9=ty8+2*tx8;
                                                }
                                                else{
                                                    tx9=-tx8;
                                                    ty9=-ty8-(2*tx8);
                                                }
                                            }
                                            else     {
                                                if(ty8-2*tx8>0)
                                                {
                                                    tx9=tx8;
                                                    ty9=ty8-2*tx8;
                                                }
                                                else{
                                                    tx9=-tx8;
                                                    ty9=-ty8+(2*tx8);
                                                }
                                            }
                                            if(tx9==x1 && ty9==y1)
                                            {
                                                min1=min(cost,min1);
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<min1<<endl;
    }
}

