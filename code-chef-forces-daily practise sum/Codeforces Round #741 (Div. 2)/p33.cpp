
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{


    int t;
    cin>>t;
    while (t--)
    {

        int n;
        cin>>n;
            string str;



                cin>>str;
                int hello1 = 0, hello2 = 0;


                int oneCount = 0;
                for (int i = 0; i < n; i++)
                {
                    if (str[i] == '0')
                    {
                hello2 = i;



            }

            else
                oneCount++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == '0')
            {
                hello1 = i;
            }
        }
                hello1++;
                hello2++;
                if (oneCount == n)
                {
            int tp=0;
            if(n%2!=0){
                tp=1;
            }

            cout << 1 << " " << (n / 2 + tp) << " " << (n / 2) + 1 << " " << n << "\n";
        }
        else
        {


            if (hello2 >= (n / 2) + 1)
                cout << 1 << " " << hello2 << " " << 1 << " " << hello2 - 1 << "\n";

            else cout << hello1 << " " << n << " " << hello1 + 1 << " " << n << "\n";

        }
    }
}
