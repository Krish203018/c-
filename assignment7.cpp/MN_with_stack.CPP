#include <bits/stdc++.h>
using namespace std;
void PrintMinNumberForPattern(string arr)
{
	int curr_max = 0;

	int last_entry = 0;

	int j;

	// Iterate over input array
	for (int i=0; i<arr.length(); i++)
	{
		// Initialize 'noOfNextD' to get count of
		// next D's available
		int noOfNextD = 0;

		switch(arr[i])
		{
		case 'I':
			// If letter is 'I'

			// Calculate number of next consecutive D's
			// available
			j = i+1;
			while (arr[j] == 'D' && j < arr.length())
			{
				noOfNextD++;
				j++;
			}
			
			if (i==0)
			{
				curr_max = noOfNextD + 2;

				// If 'I' is first letter, print incremented
				// sequence from 1
				cout << ++last_entry;
				cout << curr_max;

				// Set max digit reached
				last_entry = curr_max;
			}
			else
			{
				// If not first letter

				// Get next digit to print
				curr_max = curr_max + noOfNextD + 1;

				// Print digit for I
				last_entry = curr_max;
				cout  << last_entry;
			}

			// For all next consecutive 'D' print 
			// decremented sequence
			for (int k=0; k<noOfNextD; k++)
			{
				cout << --last_entry;
				i++;
			}
			break;

		// If letter is 'D'
		case 'D':
			if (i == 0)
			{
				// If 'D' is first letter in sequence
				// Find number of Next D's available
				j = i+1;
				while (arr[j] == 'D' && j < arr.length())
				{
					noOfNextD++;
					j++;
				}

				// Calculate first digit to print based on 
				// number of consecutive D's
				curr_max = noOfNextD + 2;

				// Print twice for the first time
				cout<< curr_max<< curr_max - 1;

				// Store last entry
				last_entry = curr_max - 1;
			}
			else
			{
				// If current 'D' is not first letter

				// Decrement last_entry
				cout<< last_entry - 1;
				last_entry--;
			}
			break;
		}
	}
	cout << endl;
}

// Driver program to test above
int main()
{ 
    int n;
    string s;
    cin>>n;
    while (n--)
    {
        cin>>s;
PrintMinNumberForPattern(s);
    }
     
	return 0;
}
