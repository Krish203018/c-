/*
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       if (i%2==0)
       {
          cout<<"I hate ";

       }
       else
       {
           cout<<"I love ";
       }
       if (i!= n-1)
       {
          cout<<"that ";
       }
       else
       {
          cout<< "it";
       }
       
       
       
   }
   
}*/
/*
#include <iostream>
using namespace std;


int main() {
    int n;
    cout << " Enter the value of n whose square root is to be found " << endl;
    cin >> n;

    int d;
    cout << " till what decimal places " << endl;
    cin >> d;

    float inc=1;
    float ans=0;
    int j=1;
    
    while(j<=d) {
         while(ans*ans<=n){
            ans+=inc;
        }
        ans = ans - inc;
        inc=inc/10;
        j++;        
    }
    cout << ans ;
  return 0;  
}*/
#include <iostream>
#include <climits>
using namespace std;



int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    
    int max_v=INT_MIN;
     int i=0;
     int val; 
     while(i<=n) {
          cout << "Tell the next value" << endl;
          
          cin >> val;
          if(max_v < val) 
           max_v = val;
           
        i++;
    }
   cout << max_v << endl;



return 0;
}