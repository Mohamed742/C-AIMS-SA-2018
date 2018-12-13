#include<iostream>
#include<cmath>

using namespace std ;

double sumpro(int x,int y){
   if (y == 0)
      return 1;
   else 
      return x*sumpro(x,y-1);
}
int main(){
  	int x;
  	int y;
  
 	cout <<"Enter value of x ";
 	cin >> x;

 	cout<<"Enter value of y " ;
 	cin >> y;
 	cout <<sumpro(x,y)<<endl;
return 0;
}



