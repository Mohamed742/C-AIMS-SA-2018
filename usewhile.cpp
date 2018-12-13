#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
  int x;
  int y;
  cout<< "Enter the number x";
  cin>> x ;
  cout << " Enter the number y";
  cin>> y;
  int t = 1 ;
  if (y == 0) 
       return 1;
  else 
    while (y > 0)
  {
 
     t = t*x ; 
        y-- ;
   }
cout<< t << endl;
}

