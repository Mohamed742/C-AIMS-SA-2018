#include <iostream>
#include <vector>

using namespace std;

double max_mum(vector<int> v){
  
 auto max_min = minmax_element (v.begin(),v.end());
  std::cout << "min is: " << *max_min.first <<'\n';
  std::cout << "max is: " << *max_min.second <<'\n';
 }

int main(){

 vector<int> a = {1,5,9,7} ;

for (uint i = 0; i < a.size(); ++i){
        std::cout << max_mum(a)[i] <<'\t';

}
