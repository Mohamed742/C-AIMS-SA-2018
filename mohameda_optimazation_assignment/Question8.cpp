#include<iostream>
#include<sstream>
#include<string>
#include<cmath>
#include<array>
#include<vector>

//function to read the element in the array.
int showarray(std :: array<double ,2> a){

   std :: cout<< "[" ;
   for(int i = 0 ; i < a.size() ; i++)
      std :: cout << a[i] << " ";
       std :: cout<< "]"<<'\n';
 } 

//part b .
   std :: array<double,2> read_point(){
   std :: array<double,2> a;
   double  v_1,v_2;
   std :: cout << "Enter the value of v_1 , v_2"<< '\n';
   std :: cin >> v_1 >> v_2;
   std :: cout.precision(20);
    a[0] = v_1 ;
    a[1] = v_2 ;
   return a;
  }
//part c.
  std :: vector < std :: array<double ,2> > read_problem()
  {
   std :: vector<std :: array<double ,2>> v;
   int n;
   std :: cout<< "Enter number n "<< '\n';
   std ::cin >> n;
   
   for(int i = 0 ; i < n ; i ++){
   v.push_back(read_point());}
    
   return (v);
   }
//part d 

int main(){
   std::array<double,2> v;
   read_problem();
  return 0;
}


