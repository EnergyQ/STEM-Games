#include <bits/stdc++.h> 
using namespace std; 
  
long long int josephus(long long int n, long long int k) 
{ 
    long long int sum = 0, i; 
  
    for (i = 2; i <= n; i++) 
        sum = (sum + k) % i; 
  
    return sum + 1; 
} 
  
int main() 
{ 
    int n, k;
    cin >> n >> k; 
    cout << josephus(n, k)-1 << endl; 
    return 0; 
} 