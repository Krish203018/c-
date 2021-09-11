#include<iostream>
using namespace std;
#define N 4
void multiply(int arr[][N],int arr1[][N],int res[][N])
{
   {
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += arr[i][k] * arr1[k][j];
        }
    }
}
}
int main()
{
    int n,m;
    cout<<"size of array"<<endl;
   
    int arr[N][N];


for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
		cin>>arr[i][j];
	}
}
cout<<"size of array"<<endl;

int arr1[N][N];
int res[N][N];

for(int l=0;l<N;l++)
{
	for(int o=0;o<N;o++)
	{
		cin>>arr1[l][o];
	}
}
 multiply(arr, arr1,res);
  cout << "Result matrix is \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << res[j][i] << " ";
        cout << "\n";
    }
 
    return 0;

}
/*1
2
3
4
1
2
3
4
1
2
3
4
1
2
3
4*/