#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int i=0;
        int odd_count=0;
        int op_count=0;
        for (i=0;i<n;i++)
         {
             cin >> a[i];
             if(a[i]%2==1)odd_count++;
         }
            if(odd_count!=(n/2))cout << "-1"<<endl;
            else{
                    for(int j=0;j<n;j+=2)
                        {
                            if(a[j]%2!=0)op_count++;
                        }
                        cout << op_count << endl;
        }
 
        op_count=0;
 
    }
}
