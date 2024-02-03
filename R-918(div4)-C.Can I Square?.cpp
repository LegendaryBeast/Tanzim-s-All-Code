#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long a[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        long long i=1;
        int flag=0;
        while(i*i<=sum){
            if(i*i==sum){
                flag=1;
                break;
            }
            i++;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
