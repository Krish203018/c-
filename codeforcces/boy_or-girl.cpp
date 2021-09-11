// C++ program to illustrate string
// with unique characters using
// brute force technique
#include <bits/stdc++.h>

using namespace std;

bool uniqueCharacters(string str)
{

	// If at any time we encounter 2
	// same characters, return false
	for (int i = 0; i < str.length() - 1; i++) {
		for (int j = i + 1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				return false;
	
		}
	}

	// If no duplicate characters encountered,
	// return true
	return true;
}

// driver code
int main()
{
	string str ;
     cin>>str;

	if (uniqueCharacters(str)) {
		cout <<  "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
    }
	return 0;

}