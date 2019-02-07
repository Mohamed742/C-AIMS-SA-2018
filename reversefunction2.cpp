#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
 std::vector<int> range2(std::vector<int> ) {
    for (int i = 0 ; i < a.size(); ++i) {

    std :: reverse(a.begin(),a.end()); 
         for(auto l : a)
      std :: cout<< a[i] <<'\t';
   }   
    //for (it = a.begin(); it != a.end(); it++) 
        //std :: cout << (*it) << " " << '\t';
    
   //std :: cout << a[i] <<std :: endl;
 }

int main() {
  std::vector<int> vec2 = {12,17,5,3,6};
  for (int i = 0; i < vec2.size(); ++i){ 
    
        std::cout << range2(vec2)[i] <<'\t';}
   
 }
