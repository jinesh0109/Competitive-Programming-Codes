
    class Solution
    {
    public:
        bool isSumEqual(string firstWord, string secondWord, string targetWord) {
            string a,b,c1;
            a=firstWord,b=secondWord,c-targerWord;
            int n1=0,n2=0,n3=0,i,c;
            c=a.size()-1;
            for(i=0;i<a.size();i++)
            {
                int temp=a[i]-97;
                n1=n1+pow(10,c)*temp;
                c--;
            }
            c=b.size()-1;
            for(i=0;i<b.size();i++)
            {
                int temp=b[i]-97;
                n2=n2+pow(10,c)*temp;
                c--;
            }
            c=c1.size()-1;
            for(i=0;i<c1.size();i++)
            {
                int temp=c1[i]-97;
                n3=n3+pow(10,c)*temp;
                c--;
            }

            if(n1+n2==n3)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }



