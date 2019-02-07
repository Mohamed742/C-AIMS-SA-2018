#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
 
int main()
{
  int i = 0 ;
    // Create a vector containing integers
    std::vector<int> vec = {};
    // Add two more integers to vector
  for (i ; i <= 7; i++){
     
    vec.push_back(i+2);
    }
  for( int r : vec)
  cout << r <<endl;
  }

