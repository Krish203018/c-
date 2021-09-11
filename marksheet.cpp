#include<iostream>
using namespace std;
class mark
{
    private:
          char Name;
          char Roll;
          char Physics;
          char cse;
          char BEE;
          char Eng;
   public:
          void read_data();
          void show_data();
          void write_rec();
          void read_rec();
          void search_rec();
          void edit_rec();

};
void mark::read_data()
{
    cout<<"enter your roll no."<<endl;
    cout<<"      ";
    cin>>Roll;
    
}