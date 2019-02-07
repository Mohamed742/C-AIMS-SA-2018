//#include<iostream>
//#include<vector>

//using namespace std;

#include <iostream>
#include <vector>
#include <algorithm> 
#include<cmath>
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
  for( int t : vec)
    cout << t << endl;
 
  // dtermine the max and min element in vec
  auto max_min = std::minmax_element (vec.begin(),vec.end());
  std::cout << "min is: " << *max_min.first <<'\n';
  std::cout << "max is: " << *max_min.second <<'\n';

  sort(vec.begin(), vec.end()); 
  
  cout << "Sorted elemnt in vec \n"; 
  for (auto u : vec) 
   cout << u <<endl;
//reverse function
cout << "reverse";
  reverse(vec.begin(),vec.end());


   vector <int> :: iterator it; 
      
    for (it = vec.begin(); it != vec.end(); it++) 
        cout << (*it) << " ";
//round the value of vector 
  vector<double> vec1 = {0.12 , 11.568,0.000005,21.658,17.5};
       for (double x : vec1)
         cout << round(x) << endl;
       std::vector<int> vec2 = {12,17,5,3,6};
       sort(vec2.begin(),vec2.end());
       cout<< " The sort of vec2"<<endl;
       for(auto l : vec2)
         {
        cout<<l<<'\t';}
        // reverse order of vector
        cout << " The reverse of vec2" <<endl;
       reverse(vec2.begin(),vec2.end());
        for(auto l : vec2)
       cout<< l<<'\t';
     return 0;
 
}


