#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;
        string s1,s2;
        cin >> n >> s1 >> s2;
        int cat1 = 0, cat2 = 0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='1')cat1++;
        }
        
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='1')cat2++;
        }
        //cout<<cat1<<" "<<cat2<<endl;
        
        int op=0;
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='1')
            {
                if(s2[i]!=s1[i])op++;
            }
        }
        int f = cat1>cat2?cat1-cat2:0;
        cout << f+op << endl;
    }
}
