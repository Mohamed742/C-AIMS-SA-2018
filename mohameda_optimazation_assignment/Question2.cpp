// Question 2 : Write a function isPrime(int number) that inputs an integer number
//and outputs a Boolean which is true iff the input is prime. Now write
//a function printPrimes(int upto) that prints all primes at most upto.
//Test your two functions in one program, choosing sensible test cases.


#include <iostream>
  using namespace std;
  int i;
  bool isPrime(int number) //to determine the prime numbers .
  {
     int i;
     for (i=2; i<number; i++)
     { if(number % i==0)
       return 0;
     }
     
     return 1; //will return true otherwise
  }

 int printPrime(int num){  // to print the prime numbers untill the number entered .
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
