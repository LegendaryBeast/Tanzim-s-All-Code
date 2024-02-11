#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define c(x) scanf("%d",&x)
#define o(x) printf("%d\n",x)
#define cin(x,y) scanf("%d %d",&x, &y)
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t ;;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int num = n;
        for(int i = 0 ; i < n ; i++)
        {
            arr[i] = num;
            num--;
        }
        sort(arr, arr + k + 1);
        
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
