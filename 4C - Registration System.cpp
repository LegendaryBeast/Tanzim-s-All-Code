#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int t; cin >>t;
	unordered_map<string, int> mp; 
	
	while(t--)
	{
	    string s; cin >> s;
	    if(mp.count(s)==0){
        cout<<"OK"<<endl;
        mp[s]=1;
	    }
	    else 
      {
	        cout<<s<<mp[s]<<endl;
	        mp[s]+=1;
	    }
	}
  
} 
