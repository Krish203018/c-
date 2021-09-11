#include <map>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  map< int, string> words; 
  words[0] = "Mohit";
  words[1] = "Bhola";
  words[2] = "Anuj";
  words[3] = "Rohit";
  words[4] = "Krishan";
  words[5] = "Nazir";
  words[6] = "Vivekananda";

  srand((int)time(0));
  vector<string> v(12); // create a vector of 10 elements.
  for(vector<string>::iterator it = v.begin(); it != v.end(); it++) {
    *it = words[rand() % 7];
    cout << *it << endl;
    return 0;
  };
}