#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void reverse(string str)
{
    // `str[low…high]` forms a word
    int start = 0, end = 0;
 
    // scan the text
    for (int i = 0; i < str.length(); i++)
    {
        // if space is found, we found a word
        if (str[i] == '.')
        {
            // reverse the found word
            reverse(str.begin() + start, str.begin() + end + 1);
 
            // reset `low` and `high` for the next word
            start = end = i + 1;
        }
        else {
            end = i;
        }
    }
    // reverse the last word
    reverse(str.begin() + start, str.begin() + end + 1); 

}
 
int main()
{
    string str ="my.name.is";
    reverse(str);
    cout << str;
    return 0;
}

