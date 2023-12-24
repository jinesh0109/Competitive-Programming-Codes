#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        string maxAns="0000000000",minAns="1111111111";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            string t1 = bitset<10>(arr[i]).to_string();
            for(int j=9;j>=0;j--)
            {
                if(t1[j]=='1')
                {
                    maxAns[j]='1';
                }
                else
                {
                    minAns[j]='0';
                }
            }
        }
        int maxA = binaryToDecimal(maxAns);
        int minA = binaryToDecimal(minAns);
        cout<<maxA-minA<<endl;

        

        

    }
}