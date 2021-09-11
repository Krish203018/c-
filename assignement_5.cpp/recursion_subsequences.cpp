#include <iostream>

using namespace std;

void printSubsequences(string subs,string inp )
{
    if (inp.length() == 0)
    {
        cout << subs << endl;
        return;
    }
    char apd = inp.at(0);
    string substr = inp.erase(0, 1);
    printSubsequences(subs + apd,substr );
    printSubsequences( subs,substr);
}
/*
    H, He, Hl, Hl, Ho, Hel, Hel, Heo, Hll, Hlo, Hlo, Hell, Helo, Helo, Hllo, Hello, e, el, el, eo, ell, elo, elo, ello, l, ll, lo, llo, l, lo, o 
*/
int main()
{
    string a ;
    cin>>a;
    printSubsequences(string(""),a);
    return 0;
}