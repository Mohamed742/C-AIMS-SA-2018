#include<iostream>
#include <vector>
#include <algorithm> 
#include<cmath>
using namespace std;
 
double rev1(vector<int>v)
{

  vector<int> w;
   {
     for (int i = v.size()-1  ; 0<=i ;i--)
        w.push_back(v[i]);
        v = w;
   }
  for(auto &k : w)
  cout << k << endl;
 }
 

 int main()
  {
  vector<int> vec14 = {123,78,15,14};
  vec14.swap(vec14[0],vec14[2]);
  for (auto &r : vec14){
   cout<< r <<endl;
  }
 }
