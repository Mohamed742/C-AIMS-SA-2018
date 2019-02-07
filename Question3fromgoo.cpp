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

 int upto(int num){
  int i ;
  for (i = 2 ; i < num ; i++)
  { if (isPrime(i) == 1) 
    return i;
 }
 }
   int main()
  { int counter=2;
    int current_number=2;
    cout<< "First 10 prime numbers" << endl;
 while (counter <10)
    { if (isPrime(current_number)==true)
      { cout << current_number << endl;
        counter++;
     }
      current_number++; }
      return 0;
  }

	

 
