//Question1: Recall the Collatz function from the first Python assignment. Based on
 //the Python implemention, reimplement in C++, noting similarities and
 //fundamental differences.
#include<iostream>

//using namespace std;

int main(){

 int n ;
 std ::cout<< "Enter value of n";
 std ::cin >> n;
 int i = 1;
 if(n==1){
 return 1;}

 else {
 while (n != 1)
 {
 if (n%2==0) {
   n = n/2 ;
 }
 else {
   n = 3*n +1;
 }
   ++i;
  std:: cout <<n<<std ::endl;
 }
 
 }
//cout << "The coltaz step for n is "<< n << "and it come to "<< n<<endl;
 } 



