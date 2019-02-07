#include<iostream>
#include <vector>
#include <algorithm> 
#include<cmath>
using namespace std;

int main()
  {
  vector<int> vec14 = {123,78,15,14};

  swap(vec14[0],vec14[2]);
  
  for (auto &r : vec14)
   cout<< r <<endl;
  
 }
