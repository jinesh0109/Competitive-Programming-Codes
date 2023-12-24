#include<bits/stdc++.h>
using namespace std;
void ans()
{
    int n,i;
        cin>>n;
        double s=0.0,s1=0.0;
        for(i=0;i<n;i++)
        {
            double g,a,b;
            cin>>g>>a>>b;
            s+=g*(b/(a+b));
            s1+=g*(a/(a+b));
        }
         cout<<fixed << setprecision(7)<<s<<" "<<s1<<"\n";


}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ans();
    }
    return 0;
}
