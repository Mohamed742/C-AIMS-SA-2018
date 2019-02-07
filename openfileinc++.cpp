#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main () {
   int i = 0 ;
  string inputs[5];
  ifstream file("Question8.txt");
  if(file.is_open())
  {
 
  
  while (!file.eof()&& i<3) {
  getline(file,inputs[i]);
  cout<< inputs[i] <<endl;
  ++ i;
  }
  file.close();
  }
 else cout<< "unable to open the file " ;
 
 }

  //for(int i = 1;i<3;++i)
  //{
   //Question8 >> array[i]
   //}
  //}
  //std::ofstream f(" Question8.txt");
  //if (f.is_open())
  //std :: cout << f.rdbuf();
  //file.open("Question8.txt" , ios :: out | ios ::in);
  //ofstream out;
  //out.open("Question8.txt",ios::noreplace);
  
