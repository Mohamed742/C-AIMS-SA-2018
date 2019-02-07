#include<iostream>
#include<cmath>

using namespace std;

int itrative_fast(int q,int n) {
 
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
  int x ;
  int y ;
  
 cout<<"Enter x" ;
 cin>> x;
 cout << "Enter y";
 cin>> y;
  
 cout << x << "^" << y << "=" <<itrative_fast(x,y)<< endl;
 return 0;
}
  
 
