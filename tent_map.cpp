#include<iostream>

using namespace std ;

int main(){
  int i = 0;
  float x =0.01401;
  //cout << "Enter value of x" ;
  //cin >> x;
  while(i < 100){
 if(x >= 0 && x < 0.5){
      x = 1.999999*x;
  cout<< x<<endl;
   }
 else {
  x = 1.999999*(1 - x) ;
  cout<<x<<endl;}
  i++;
  }
 return 0 ;

}
