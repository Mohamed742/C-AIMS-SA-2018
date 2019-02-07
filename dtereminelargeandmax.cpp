#include <iostream>     // std::cout
#include <algorithm>    // std::minmax_element
#include <vector>        // std::array

using namespace std;
int main () {
  std::vector<int> foo {3,7,2,9,5,8,6};

  auto max_min = std::minmax_element (foo.begin(),foo.end());

  // print result:
  std::cout << "min is " << *max_min.first << '\n';
  
  std::cout << "max is " << *max_min.second << '\n';
 
  sort(foo.begin(), foo.end(), greater<int>()); 
  
  cout << "Sorted \n"; 
  for (auto u : foo) 
   cout << u << " "; 
  
    return 0;

}
