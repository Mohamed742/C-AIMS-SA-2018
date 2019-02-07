// The formula given able to found from Newton formula since f(x) = x^n - q ;
// Since we looking for root n of q then suppose q^(1/n) = x , 
// Then obtain (q^(1/n)^n) = x^n , and then q = x^n . 
// The function of the type f(x) = x^n - q , is the fuction can be minimuzed by use Netwon mehtod

#include<iostream>
#include<cmath>
//part a 
double root_itreative(double q , int n , int steps){
if(std ::cin.fail()){ 
     std ::cout<< "the enteries are not correct" << std ::endl;
        return 0 ;}
 else{
 double a_k ; 
 int i = 0 ;
 float a_0=1 ;
  while(i < steps) {
   a_k = a_0 + (q/pow(a_0,(n-1)) - a_0)/n;
        i++;
   a_0 = a_k;
 }
return a_k;}
}
//part b 
double efficentpow_itrative(double q,int n) {
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
     return t;}
} 

double root_itreative_b(double q , int n , int steps){
 if(std ::cin.fail()){ 
     std ::cout<< "the enteries are not correct" << std ::endl;
        return 0 ;}
 else{
double a_k ; 
 int i = 0 ;
 float a_0=1 ;
  while(i < steps) {
   a_k = a_0 + (1.0/n)*(q/pow(a_0,(n-1)) - a_0);
        i++;
   a_0 = a_k;
 }
return a_k; }
}
//part c 
void test_root(double q, int n, int steps)
{
  if(std ::cin.fail()){ 
     std ::cout<< "the enteries are not correct" << std ::endl;
       std ::cout<< 0<<std ::endl ;}
  else{
  double a_k =  root_itreative_b( q ,  n , steps) ; // The n root of q , which is a_k
  double a_kn =  efficentpow_itrative(a_k,n) ;    // compute the a_k^n 
  std :: cout << q << '\n' ;
  std :: cout << n << '\n' ;
  std :: cout << a_k << '\n';
  std :: cout << " a_k^n = " << a_kn << std ::endl;
  std :: cout <<"q - a_k^n = " << (q - a_kn) << std :: endl;
 } 
}
int main(int argc , char** argv){
  double q ;
  int n ;
  int steps;
  std :: cout << "Enter value of q: " ;
  std :: cin>> q ;
  std :: cout << "Enter value of n: " ;
  std :: cin>> n ;
  std :: cout << "Enter value of steps: " ;
  std :: cin>> steps ;
  double r = root_itreative(q , n , steps) ;
  std :: cout<< "part a "<<'\n';
  std :: cout<<"The "<<n<<"root of"<<q<<"is"<< r <<std :: endl;
  std :: cout << "part b" << '\n';
  std :: cout << root_itreative_b(q,n,steps) << '\n' ;
  std :: cout << "part c" << '\n' ;
  test_root(q,n,steps);
}


