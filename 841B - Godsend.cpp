#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,sum=0;
    
    cin >> x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
    cin >> arr[i];
    if(arr[i]%2!=0){sum=1;}
    }
    if(sum==1)cout << "First";
    else cout << "Second";
}
