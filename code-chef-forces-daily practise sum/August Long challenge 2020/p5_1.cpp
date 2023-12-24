#include<bits/stdc++.h>
#include<set>
#include<unordered_map>
#include<map>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        if(k==1)
      {
        set<int>s2;
        s2.insert(arr[0]);
        int c=1;
        for(i=1;i<n;i++)
        {
            auto it=s2.find(arr[i]);
            if(it!=s2.end())
            {
                c++;
                s2.clear();
                s2.insert(arr[i]);
            }
            else{
                s2.insert(arr[i]);
            }
        }
        cout<<c<<endl;
        }
        else{
            int l;
            map<int,vector<int>>m,m1;

            vector <int> v,v1;
            set <int>s,s1;
            int Greatanswer=100000;
            for(l=0;l<n;l++)
            {
                v.clear();
                v1.clear();
                s.clear();
                s1.clear();
                m.clear();
                m1.clear();

                v.push_back(arr[0]);
                int z=1;
                s.insert(arr[0]);

                for(i=1;i<=l;i++)
                {

                    auto it=s.find(arr[i]);
                    if(it==s.end())
                    {
                        s.insert(arr[i]);
                        v.push_back(arr[i]);
                    }
                    else{
                        m[z]=v;
                        z++;
                        s.clear();
                        v.clear();
                        s.insert(arr[i]);
                        v.push_back(arr[i]);
                        }
                }
                    m[z]=v;
                //      For i+1 to n-1
                int z1=1;
                if(l!=n-1)
                {
                    v1.push_back(arr[l+1]);

                    s1.insert(arr[l+1]);



                for(i=l+2;i<=n-1;i++)
                {

                    auto it=s1.find(arr[i]);
                    if(it==s1.end())
                    {
                        s1.insert(arr[i]);
                        v1.push_back(arr[i]);
                    }
                    else{
                        m1[z1]=v1;
                        z1++;
                        s1.clear();
                        v1.clear();
                        s1.insert(arr[i]);
                        v1.push_back(arr[i]);
                        }
                }


                    m1[z1]=v1;
            }



            //     The show began

            //unordered_map<int,int>m2,m3;
            int arr2[101],arr3[101];
            for(int n1=0;n1<101;n1++)arr2[n1]=0;
            for(int n1=0;n1<101;n1++)arr3[n1]=0;
            int j;
            //m2.clear();
            //m3.clear();
            auto it2=m.begin();
            int cost=0,previousCost=0;
            for(auto it3 = it2->second.begin(); it3 != it2->second.end(); it3++)
            {
                        //m2[*it3]++;
                        arr2[*it3]++;
            }
            it2++;
            while(it2!=m.end())
            {
                cost=0,previousCost=0;
                 for(auto it3 = (it2)->second.begin(); it3 != (it2)->second.end(); it3++)
                    {
                        arr3[*it3]++;
                    }
                    //auto it4 =m2.begin();

                      //  while(it4!=m2.end())
                       // {
                        //    if((*it4).second>1)
                          //    previousCost+=(*it4).second;

                           // it4++;
                        //}
                        for(int n1=1;n1<=100;n1++)
                        {
                            if(arr2[n1]>1)
                                previousCost+=arr2[n1];
                        }
                    //it4 =m3.begin();
                    //while(it4!=m3.end())
                    //{
                      //  m2[(*it4).first]+=(*it4).second;
                       // it4++;
                    //}
                    for(int n1=1;n1<=100;n1++)
                    {
                        arr2[n1]+=arr3[n1];
                    }
                    //it4=m2.begin();
                    //while(it4!=m2.end())
                    //{
                      //  if((*it4).second>1)
                       // cost+=(*it4).second;

                       // it4++;
                    //}
                    for(int n1=1;n1<=100;n1++)
                        {
                            if(arr2[n1]>1)
                                cost+=arr2[n1];
                        }

                    if(cost+k>2*k+previousCost)
                    {

                        for(int n1=1;n1<=100;n1++)arr2[n1]=0;
                        for(int n1=1;n1<=100;n1++)
                        {
                          arr2[n1]=arr3[n1];
                        }
                        for(int n1=1;n1<=100;n1++)arr3[n1]=0;
                        //m2.clear();
                        //m2=m3;
                        //m3.clear();
                    }
                    else{

                        //it4 =m3.begin();
                        //while(it4!=m3.end())
                        //{
                          //  m2[(*it4).first]-=(*it4).second;
                           // it4++;
                        //}
                        for(int n1=1;n1<=100;n1++)
                        {
                            arr2[n1]-=arr3[n1];
                        }
                        //it4 =m2.begin();
                        //while(it4!=m2.end())
                        //{
                          //  for(int p=1;p<=(*it4).second;p++)
                            //{
                             //   m[(*it2).first].push_back((*it4).first);
                            //}


                            //it4++;
                        //}
                        for(int n1=1;n1<=100;n1++)
                        {
                            if(arr2[n1]>0)
                            {
                                for(int p=1;p<=arr2[n1];p++)
                                {
                                    m[(*it2).first].push_back(n1);
                                }
                            }

                        }
                        auto temp=it2;
                        temp--;
                        m.erase(temp);

                        //it4 =m3.begin();
                        //while(it4!=m3.end())
                        //{
                         //   m2[(*it4).first]+=(*it4).second;
                          //  it4++;
                        //}
                        for(int n1=1;n1<=100;n1++)
                        {
                            arr2[n1]+=arr3[n1];
                        }
                        //m3.clear();
                        for(int n1=1;n1<=100;n1++)arr3[n1]=0;


                    }

            it2++;

            }
            //unordered_map<int,int>m6;
            //m6.clear();
             it2=m.begin();
              int ans1=0;
              int arr6[101];
              for(int n1=0;n1<101;n1++)arr6[n1]=0;
            while(it2!=m.end())
            {
                for(auto it3 = (it2)->second.begin(); it3 != (it2)->second.end(); it3++)
                 {
                     //m6[*it3]++;
                     arr6[*it3]++;
                 }
                 for(int n1=1;n1<=100;n1++)
                 {
                     if(arr6[n1]>1)
                     {
                         ans1+=arr6[n1];
                     }
                 }
                 for(int n1=1;n1<=100;n1++)arr6[n1]=0;
                 //for(auto it10=m6.begin();it10!=m6.end();it10++)
                 //{
                  //   if((*it10).second>1)
                   //  {
                    //     ans1+=(*it10).second;
                     //}
                 //}
                 ans1+=k;
                 //m6.clear();
                 it2++;
            }


                    // one more show



                    int ans2=0;

          if(l!=n-1)
          {

            //unordered_map<int,int>m4,m5;
            //m4.clear();
            //m5.clear();
            int arr4[101],arr5[101];
            for(int n1=0;n1<101;n1++)arr4[n1]=0;
            for(int n1=0;n1<101;n1++)arr5[n1]=0;
            int j1;
            it2=m1.begin();
            int cost1=0,previousCost1=0;
            for(auto it3 = it2->second.begin(); it3 != it2->second.end(); it3++)
            {
                        //m4[*it3]++;
                        arr4[*it3]++;
            }
            it2++;
            while(it2!=m1.end())
            {
                cost1=0,previousCost1=0;
                 for(auto it3 = (it2)->second.begin(); it3 != (it2)->second.end(); it3++)
                    {
                        //m5[*it3]++;
                        arr5[*it3]++;
                    }
                    //auto it4 =m4.begin();

                      //  while(it4!=m4.end())
                       // {
                         //   if((*it4).second>1)
                           //   previousCost1+=(*it4).second;

                           // it4++;
                        //}
                    for(int n1=1;n1<=100;n1++)
                    {
                        if(arr4[n1]>1)
                            previousCost1+=arr4[n1];
                    }
                    //it4 =m5.begin();
                    //while(it4!=m5.end())
                    //{
                     //   m4[(*it4).first]+=(*it4).second;
                      //  it4++;
                    //}
                    for(int n1=1;n1<=100;n1++)
                    {
                        arr4[n1]+=arr5[n1];
                    }
                    //it4=m4.begin();
                    //while(it4!=m4.end())
                    //{
                     //   if((*it4).second>1)
                      //  cost1+=(*it4).second;

                       // it4++;
                    //}
                    for(int n1=1;n1<=100;n1++)
                    {
                        if(arr4[n1]>1)
                            cost1+=arr4[n1];
                    }

                    if(cost1+k>2*k+previousCost1)
                    {
                        for(int n1=1;n1<=100;n1++)arr4[n1]=0;
                        for(int n1=1;n1<=100;n1++)
                        {
                            arr4[n1]=arr5[n1];
                        }
                        for(int n1=1;n1<=100;n1++)arr5[n1]=0;
                        //m4.clear();
                        //m4=m5;
                        //m5.clear();
                    }
                    else{

                        //it4 =m5.begin();
                        //while(it4!=m5.end())
                        //{
                          //  m4[(*it4).first]-=(*it4).second;
                           // it4++;
                        //}
                            for(int n1=1;n1<=100;n1++)
                            {
                                arr4[n1]-=arr5[n1];
                            }
                        //it4 =m4.begin();
                        //while(it4!=m4.end())
                        //{
                          //  for(int p=1;p<=(*it4).second;p++)
                           // {
                            //    m1[(*it2).first].push_back((*it4).first);
                            //}

                            //it4++;
                        //}
                          for(int n1=1;n1<=100;n1++)
                            {
                                if(arr4[n1]>0)
                                {
                                      for(int p=1;p<=arr4[n1];p++)
                                    {
                                        m1[(*it2).first].push_back(n1);
                                    }
                                }

                            }

                        auto temp=it2;
                        temp--;
                        m1.erase(temp);

                        //it4 =m5.begin();
                        //while(it4!=m5.end())
                        //{
                          //  m4[(*it4).first]+=(*it4).second;
                           // it4++;
                        //}
                          for(int n1=1;n1<=100;n1++)
                            {
                                arr4[n1]+=arr5[n1];
                            }
                        //m5.clear();
                        for(int n1=1;n1<=100;n1++)arr5[n1]=0;
                    }

            it2++;

            }
            //unordered_map<int,int>m7;
            //m7.clear();
             it2=m1.begin();
              ans2=0;
              int arr7[101];
              for(int n1=0;n1<101;n1++)arr7[n1]=0;
              if(l!=n-1)
              {
                   while(it2!=m1.end())
                    {
                        for(auto it3 = (it2)->second.begin(); it3 != (it2)->second.end(); it3++)
                        {
                            //m7[*it3]++;
                            arr7[*it3]++;
                        }
                           for(int n1=1;n1<=100;n1++)
                        {
                            if(arr7[n1]>1)
                            {
                                ans2+=arr7[n1];
                            }
                        }
                        for(int n1=1;n1<=100;n1++)arr7[n1]=0;
                       // for(auto it10=m7.begin();it10!=m7.end();it10++)
                        //{
                          //  if((*it10).second>1)
                            //{
                              //  ans2+=(*it10).second;
                            //}
                        //}
                        ans2+=k;

                        //m7.clear();
                        it2++;
                    }
              }

          }

              Greatanswer=min(Greatanswer,ans1+ans2);


             }
            cout<<Greatanswer<<"\n";
        }
  }
}
