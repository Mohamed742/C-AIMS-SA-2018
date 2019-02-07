#include<iostream>


double fi(float x){
 if (x >= 0 && x <=1)
 { 
 if(x >= 0 && x < 0.5)
   return  x = 2*x;
   else 
   return x = 2 - 2*x ;
 }
  return 0;
 }
int main(){
  int i = 1;
  float y;
  float z =0.01401;
  while (i <=100){
 y = fi(z);
 std ::cout << z << std ::endl;
  i++;
  z = y;
  }
 return 0 ;

}
