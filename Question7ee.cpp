#include <iostream>
#include <vector>

namespace{
    typedef unsigned int uint;
}

std::vector<int> sort(std::vector<int>a)
{
    for (int i = 1; i < a.size(); ++i){
        for (int j = 0; j < a.size() - 1; ++j){
            if (a[j] < a[i]) std::swap(a[j], a[i]);
        }
    }

    return a;
}
 

int main()
{
    std::vector<int> a = { 17, 12, 1, 20, 4, 6, 94 };

    for (uint i = 0; i < a.size(); ++i){
        std::cout << sort(a)[i] <<'\t';
    }
  //part(b)
   //dtermine the max and min element in vec
 // auto max_min = std::minmax_element (vec.begin(),vec.end());
  //std::cout << "min is: " << *max_min.first <<'\n';
  //std::cout << "max is: " << *max_min.second <<'\n';

  //std :: cout << "Standerted outputs " << '\n';
  //sort(vec.begin(), vec.end()); 
  
  //std :: cout << "Sorted elemnt in vec"<< '\n'; 
   //std :: cout << '[' ;
  //for (auto u : vec) 
   //std ::cout << u << " " << '\t'; // standerted outputs 
   //std :: cout << ']' << '\n';
 // part c 
  //reverse function
 //std :: cout << "part c " << '\n' ;

 //std :: cout << "reverse" << '\n';
  //std :: cout << '[' ;
  //reverse(vec.begin(),vec.end());


   //std :: vector <int> :: iterator it; 
      
    //for (it = vec.begin(); it != vec.end(); it++) 
        //std :: cout << (*it) << " " << '\t';
        //std :: cout << ']';
}
