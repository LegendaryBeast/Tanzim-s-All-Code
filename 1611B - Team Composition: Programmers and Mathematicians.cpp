#include<bits/stdc++.h>
using namespace std;
 
//#define max INT_MAX
#define lman LLONG_MAX
#define ll long long int
#define test() int t;cin>>t;while(t--)
#define in(n) scanf("%d",&n)
#define out(n) printf("%d",n)
#define for(n,i) (int i=0;i<n;i++)
#define pq_min(int) priority_queue<int,vector<int>,greater<int>> pq
 
int main()
{
    test()
    {
        ll x , y;
        cin >> x >> y;
        ll count;
        ll b = max(x,y);
        ll a = min(x,y);
        count = (a+b)/4 ;
        //count = (x + y)/4;
        if(a==0 || b==0){count = 0;}
        else if(b/a>=3)
        {
            count = a;
        }
        
        cout << count << endl;
    }
}
