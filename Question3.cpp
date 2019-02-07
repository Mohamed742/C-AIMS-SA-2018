#include<iostream>

using namespace std;
int i;
  bool isPrime(int number)
  {
     int i;
     for (i=2; i<number; i++)
     { if(number % i==0)
       return false;
     }
     
     return true; //will return true otherwise
  }
 int main(){
  int n ;
  cout << "Enter value of n";
  cin >> n ;
  cout<< isPrime(n)<<endl;
  //int count = 0;
  //int currentnum = 1;
  //cout << "first 10 prime number " ;
  //while(count < 10) {
  //if (isPrime(currentnum) == 1){
  //cout << currentnum <<endl;
  //count++;
   //}
  //++ currentnum ;
  //}
  return 0;
 }


