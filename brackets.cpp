#include<iostream>
using namespace std;

int min(int a, int b) 
{ 
    return (a < b) ? a : b; 
} 

long long ct(long long n,long long k) {
    int C[100][100]; 
    int i, j; 
  
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
  
            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
}

int main() {
    long long n1,n2,n3;
    cin>>n1>>n2>>n3;
    long long result = ct(2*n1+2*n2+2*n3,n1+n2+n3)*ct(n1+n2+n3,n1)*ct(n2+n3,n3)/(n1+n2+n3+1);
    cout << result%1000000009 << endl;
}