#include<iostream>
#include<cmath>
using namespace std ;

double root_itreative(double q , int n , int steps){
double a_k ; 
int i = 0 ;
 float a_0=1 ;
  while(i < steps) {
   a_k = a_0 + (q/pow(a_0,(n-1)) - a_0)/n;
        i++;
   a_0 = a_k;
 }
return a_k;
}

int main(int argc , char** argv){
  //part a
  double q ;
  int n ;
  int steps;
  cout << "Enter value of q: " ;
  cin>> q ;
  cout << "Enter value of n: " ;
  cin>> n ;
  cout << "Enter value of steps: " ;
  cin>> steps ;
  double r = root_itreative(q , n , steps) ;
  cout<<"The "<<n<<"root of"<<q<<"is"<< r <<endl;
  //part c
  float u = q - pow(r,n);
   cout<<" and the difference" << q<< "-" << pow(r,n) << "=" << u<<endl;

}
