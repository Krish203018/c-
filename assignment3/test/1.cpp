#include<iostream>
#include<algorithm>
using namespace std;
void rotate(int arr[][100],int n)
{
	for(int row=0;row<n;row++)
	{
		int start_col=0;
		int end_col=0;
		while(start_col<end_col)
		{ 
			swap(arr[row][start_col],arr[row][end_col]);\
			start_col++;
			end_col--;

		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(arr[i]<arr[j])
				{
					swap(arr[i][j],arr[j][i]);
				}
			}
		}
	}
}
int main() {
	int n;
	cin>>n;
	int arr[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>arr[i][j];
	}
   rotate(arr,n);
	return 0;
}