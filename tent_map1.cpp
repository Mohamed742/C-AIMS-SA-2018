#include<iostream>

using namespace std;


int main(){
  int i = 0;
  float j = 1;
  float x ;
  cout << "Enter value of x" ;
  cin >> x;
  while(i < 100){
 if(x >= 0 && x < 0.5){
      j = 2*x*j;
  cout<< j<<endl;
   }
 else {
  j = 2 - 2*x*j ;
  cout<<j<<endl;}
  i++;
  }
 return 0 ;

}
