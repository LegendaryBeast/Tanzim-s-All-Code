
//By WarLorD_Tanzim#, contest: Codeforces Round 918 (Div. 4), problem: (D) Unnatural Language Processing, Accepted, #, Copy
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int i;
        for(i=0;i<n-3;i++){
            if(n-i<4){
                for(int j=i;j<n;j++)cout<<s[j];
            }
            else if((s[i]=='b'||s[i]=='c'||s[i]=='d')&&(s[i+1]=='a'||s[i+1]=='e')&&
            (s[i+2]!='a'||s[i+2]!='e')&&(s[i+3]=='a'||s[i+3]=='e')){
            cout<<s[i]<<s[i+1]<<'.';
            i+=1;
            }
            else if((s[i]!='a'||s[i]!='e')&&(s[i+1]=='a'||s[i+1]=='e')&&
            (s[i+2]!='a'||s[i+2]!='e')&&(s[i+3]!='a'||s[i+3]!='e')){
            cout<<s[i]<<s[i+1]<<s[i+2]<<'.';
            i+=2;
            }
        }
        if(n-i<4){
                for(int j=i;j<n;j++)cout<<s[j];
            }
        cout<<endl;
        
    }
}
