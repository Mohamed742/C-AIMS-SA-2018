#include<iostream>
#include <iomanip>  
#include<typeinfo>
main(){
double y ;
float x;
float t = 0.00000001 ;
 double v = 0.00000001 ;
std::cout << "read value of x";

std::cin >> x ;
 y = x + 1;
 std::cout<< y<< '\n';
 std::cout << std::fixed;
 std::cout << std::setprecision(20) << y << '\n';
// std ::cout << std::setw(2) << y << '\n' ;

// Aftrer eight digits find exactly 1 ,such that y = x + 1 = 1 , which mean x = 0.00000001 .

 if (t == v)
 {
 std::cout<< "The small number can be representet "<<std::endl;
 }
 else {
  std::cout<<"The number can not be rep"<<std::endl;}
 if (typeid(x)= f){ 
  return 1;}
  else {
  return 0;}
 //std::cout<<typeid(x).name()==f << std::endl;
}


