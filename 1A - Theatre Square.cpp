#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    long long int n, m, x;
    cin >> n >> m >> x;
    long long a = ceil((double)n/x);
    long long b = ceil((double)m/x);
    cout<< a*b <<endl;
} 
