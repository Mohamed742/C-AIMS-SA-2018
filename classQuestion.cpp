#include<iostream>
#include<cmath>

using namespace std ;

double recure_a(int x,int y){
   if (y == 0)
      return 1;
   else 
      return x*recure_a(x,y-1);
}
double itrat_a(int x,int y){
  int t = 1 ;
  if (y == 0) 
       return 1;
  else 
    while (y > 0)
  {
 
     t = t*x ; 
        y-- ;
   }
return t;
}
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
int itrative_b(int q,int n) {
 
  int out = 1;

  while (n >0) {

  if (n%2 != 0) {
       out *=q ;
           n-- ;
       } 
     q = q*q;
          n/=2;
}
     return out ;
}

int main(){
 int x;
 int y;
cout<< "Enter the number x";
  cin>> x ;
  cout << " Enter the number y";
  cin>> y;
  
 cout << recure_a(x,y)<<endl;
 cout<< itrat_a(x, y)<<endl;
 cout<< power_fast(x,y)<<endl;
 cout<< itrative_b(x,y)<<endl;
}

