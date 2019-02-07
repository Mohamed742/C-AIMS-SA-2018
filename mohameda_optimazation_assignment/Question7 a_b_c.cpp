#include <iostream>
#include <vector>
#include <algorithm> 
#include<cmath>
#include<chrono>
 //part a
void showvec(std :: vector<int> v){

  std :: cout <<"[";
  for (int i = 0; i < v.size()-1 ; i++)
      //std :: cout << "reverse of vector " << '\n';
      std :: cout<< v[i] << " " ; 
      std :: cout<< v[v.size()-1]<< "]" << std :: endl; 
 }
 //part b 
// function to determine the maximum and minmum in the vector .
 int min_max(std :: vector<int> v)
{
  int min ;
  int max ;
  min = v[0];
  max = v[0];
  for (int i : v){
  if (i < min){ min = i;}
  if (i > max) { max = i;}
  }
  std :: cout << " The smollest element is : " << min << std ::endl;
  std :: cout<< "The largest element is : " << max << std :: endl;
  sort(v.begin(), v.end()); 
  
  std :: cout << "standard output elemnt in vec"<< '\n'; 
   std :: cout << '[' ;
  for (auto u : v) {
   std ::cout << u << " " << '\t';} // standerted outputs 
   std :: cout << ']' << '\n';
  }
//part c
 std::vector<int> reverse(std::vector<int> x)
{

	std::vector<int> temp(x.size());

	for (int i=x.size()-1;i>=0;i--)
	{
		temp[(x.size()-1)-i]=x[i];
	}
	return temp;
}
int main()
{
  int i = 0 ;
   //part (a) 
    // Create a vector containing integers
    std::vector<int> vec = {};
    // Add two more integers to vector
  std :: cout << "part a" << '\n';
  std ::cout << '[';
  for (i ; i <= 7; i++){
     
    vec.push_back(i+2);
    }
  for( int t : vec)
    std :: cout << t << '\t';
   std :: cout << ']' << '\n';
  std :: cout << " part b " << '\n';
  min_max(vec);
  std :: cout << "part c"<< '\n' ;
  showvec(reverse(vec));
}


