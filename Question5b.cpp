#include<iostream>

using namespace std;

double fi(float x){
 if (x >= 0 && x <=1)
 { 
 if(x >= 0 && x < 0.5)
   return  x = 1.999999*x;
   else 
   return x = 1.999999*(1- x) ;
 }
  return 0;
 }
int main(){
  int i = 1;
  float y;
  float z =0.01401;
  while (i <=100){
 y = fi(z);
 cout << z << endl;
  i++;
  z = y;
  }
 return 0 ;

}
