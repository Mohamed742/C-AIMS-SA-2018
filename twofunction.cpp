#include <iostream>
  using namespace std;
  int i;
  bool isPrime(int number)
  {
     int i;
     for (i=2; i<number; i++)
     { if(number % i==0)
       return 0;
     }
     
     return 1; //will return true otherwise
  }

 int printPrime(int num){
  int i ;
  for (i = 2 ; i < num ; i++)
  { if (isPrime(i) == 1)
      
      cout << i << endl;       
 }
 }
int main(){

  int n ;
  cout<< "Enter value of n" ;
  cin >> n ;
  cout << isPrime(n)<<endl;
  cout<< "the prime numbers up to"<< n <<endl;
  cout<< printPrime(n) << endl;
   return 0 ;
 }
