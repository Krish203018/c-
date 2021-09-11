/*Find all the subsets of a given array that sum to k.

Input Format
The first line contains an integer N , the size of the array. The next line conatins N integers. The next line contains an integer K.

Constraints
0 < N <= 20

Output Format
Output all the subsets that sum to K. The output should be printed as follows :

Sets with least no of elements should be printed first.
For equal length, elements that appear later in the original set,should be printed first.
Sample Input
5
1 4 6 5 3
10
Sample Output
6 4
3 6 1
5 4 1
Explanation
4 + 6 = 10
1 + 4 + 5 = 10
1 + 3 + 6 = 10*/
#include<iostream>
using namespace std;
int out[100]={0};
void subsets_recursion(int *ar,int *out,int key,int sum,int i,int j,int n)
{
	if(key==sum)
	{
		for(int t=j-1;t>=0;t--)
		{
			cout<<out[t]<<" ";
		}
		cout<<endl;
		return;
	}
	if(i<0)
	{
		return;
	}
	if(sum>key)
	{
		return;
	}
	subsets_recursion(ar,out,key,sum,i-1,j,n);
	out[j]=ar[i];
	sum=sum+ar[i];
	subsets_recursion(ar,out,key,sum,i-1,j+1,n);
	
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	 for(int i=0,j=n-1;i<j;i++,j--)
         swap(ar[i],ar[j]); 
	int key;
	cin>>key;
	subsets_recursion(ar,out,key,0,n-1,0,n);
}