#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a1,a2,b1,b2,c1,c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    long long int dis1,dis2,slope1,slope2;
    dis1=pow(abs(a1-b1),2)+pow((abs(a2-b2)),2);
    dis2=pow(abs(c1-b1),2)+pow((abs(c2-b2)),2);
    if(dis1==dis2 && (((b2-a2)*(c1-b1))-((c2-b2)*(b1-a1)))!=0)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}
