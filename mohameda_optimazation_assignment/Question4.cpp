#include<iostream>
#include <iomanip>  
#include<typeinfo>
 //part  (a) 
main(){
double y ;
float x;
float t = 0.00000001 ;
 double v = 0.00000001 ;
std::cout << "read value of x";
std::cin >> x  ;
 y = x + 1;
 std::cout<< y << '\n';
 std::cout << std::fixed;
 std::cout << std::setprecision(6) <<y  << '\n';
 std ::cout << std::setw(6) << y << '\n' ;

// Aftrer eight digits find exactly 1 ,such that y = x + 1 = 1 , which mean x = 0.00000001 .

 //part(b) here to check if the small number x can be represent by double , such that check if it eqal to the same small number if the type is double .
 if (t == v)
 {
 std::cout<< "The small number can be representet "<<std::endl;
 }
 else {
  std::cout<<"The number can not be represent "<<std::endl;}

 // There is numbers small than x and satiesfies x + 1 = 1 , and if the number in form of float cannot equal the same number if it in double unless the float written by more than 15 decimables .
 }


