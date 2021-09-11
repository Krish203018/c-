/*You are given an array a of length 2n. Consider a partition of array a into two subsequences p and q of length n each (each element of array a should be in exactly one subsequence: either in p or in q).

Let's sort p in non-decreasing order, and q in non-increasing order, we can denote the sorted versions by x and y, respectively. Then the cost of a partition is defined as f(p,q)=∑ni=1|xi−yi|.

Find the sum of f(p,q) over all correct partitions of array a. Since the answer might be too big, print its remainder modulo 998244353.

Input
The first line contains a single integer n (1≤n≤150000).

The second line contains 2n integers a1,a2,…,a2n (1≤ai≤109) — elements of array a.

Output
Print one integer — the answer to the problem, modulo 998244353.

Examples
inputCopy
1
1 4
outputCopy
6
inputCopy
2
2 1 2 1
outputCopy
12
inputCopy
3
2 2 2 2 2 2
outputCopy
0
inputCopy
5
13 8 35 94 9284 34 54 69 123 846
outputCopy
2588544*/
#include <bits/stdc++.h>

#include<functional>
using namespace std;
 long long binpow ;
int main()
{
    int mod =1;
    int t;
    t=1;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(2*n);
        for (int i = 0; i < 2*n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int frontsum = 0;
        for (int  i = 0; i < n; i++)
        {
           frontsum = frontsum + a[i];
           frontsum  %=mod;
        }
     int backsum = 0;
     for (int i = 0; i < n; i++)
     {
         backsum+=a[i];
        backsum %=mod;
     }
        int ans = (backsum-frontsum) % mod;
        int factorial =1;
       for (int i = 0; i < n; ++i)

       {
           ans = 1ll * ans*(n+1)%mod;
           factorial=1ll*n *i*mod;
       }
       ans = 1ll * binpow(factorial,mod-2)% mod;
       cout<<(ans+mod)% mod<<"\n";
    }
    
}