#include<iostream>

using namespace std;

 int power_fast(int q, int n)
{
  if (n==0) return 1;
  
  else
  {
    int t = power_fast(q,n/2);
   if (n%2 == 0) return t*t;
   else return q*t*t;
  }
}
int main() {

  int x ;
  int y ;
  
 cout<<"Enter x" ;
 cin>> x;
 cout << "Enter y";
 cin>> y;
  
 cout << x << "^" << y << "=" << power_fast(x,y)<< endl;
 return 0;
}

