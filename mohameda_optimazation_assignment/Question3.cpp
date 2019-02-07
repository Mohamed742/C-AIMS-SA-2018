//Question three : Recall natural-number powers of an integer q, defined by

//q^0 = 1
//q^n+1 = q . q^n
//The following functions should test validity of input, and in the error case
 //send a message to std::cout and return 0.

//(a) Write a function pow_iterative(int q, int n) which uses itera-
 //tion to evaluate q^n.

//(b) Write a function pow_recursive(int q, int n) which instead uses
//recursion to evaluate q^n.
//(c) A naive algorithm for q^n performs n − 1 products. Can you suggest
//a more efficient implementation (in either the iterative or recursive
//case, whichever you prefer)? [Hint: q^4 = ((q^2)^2).] .

#include<iostream>
#include<cmath>

//using namespace std ;
//part(a)
double pow_itrative(int x,int y){
   if(std ::cin.fail()){ 
     std ::cout<< "the enteries are not correct" << std ::endl;
        return 0 ;}
  else {
  int t = 1 ;
  if (y == 0){ 
       return 1;}
  else {
    while (y > 0)
  {
 
     t = t*x ; 
        y-- ;
   }
return t;}
 }
 }
//part b
double pow_recursive(int x,int y){
     if(std ::cin.fail()){ 
     std ::cout<< "the enteries are not correct" << std ::endl;
        return 0 ;
       }
    else {
    if (y == 0){
      return 1;}
    else { 
      return x*pow_recursive(x,y-1);}
   }
 }
//part c (i) recursive more efficent.
int efficentpow_recursive(int q, int n)
{
  if(std ::cin.fail()){ 
     std ::cout<< "the enteries are not correct" << std ::endl;
        return 0 ;}
  else{
  if (n==0) return 1;
  
  else
  {
    int t = efficentpow_recursive(q,n/2);
   if (n%2 == 0) return t*t;
   else return q*t*t;
  }
  }
}
//part c(ii) itrative more efficent .
int efficentpow_itrative(int q,int n) {
  if(std ::cin.fail()){ 
     std ::cout<< "the enteries are not correct" << std ::endl;
        return 0 ;}
  
 else{
  int t = 1;

  while (n >0) {

  if (n%2 != 0) {
       t *=q ;
           n-- ;
       } 
     q = q*q;
          n/=2;
}
     return t;
 } 
}

 int main(){
 int x;
 int y;
 std ::cout<< "Enter the number x";
  std :: cin>> x ;
  std ::cout << " Enter the number y";
  std :: cin>> y;
  
 std :: cout << "The function pow_itrative : " << x << "^" << y<< " = " << pow_itrative(x,y)<< std ::endl;
 std :: cout<< "The function pow_recursive : " << x << "^" << y<< " = " << pow_recursive(x, y)<< std ::endl;
 std :: cout<< "The function efficentpow_recursive : " << x << "^" << y<< " = " << efficentpow_recursive(x,y)<<std ::endl;
 std :: cout<< "The function efficentpow_itrative : " << x << "^" << y<< " = " << efficentpow_itrative(x,y)<< std ::endl;
}

