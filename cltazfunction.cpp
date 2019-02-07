#include<iostream>

using namespace std;

double Co(int n,int i = 0) {

 if(n == 1) {
     cout<< n <<endl;
     return (1 ,i) ;
     }
 else if(n > 1 && n%2==0)
     { i += 1 ;
       cout<< n/2<< endl;
       return Co(n/2 ,i);
    }
 else if(n >1 &&  n %2 == 1)
       { i += 1;
         cout<< 3*n+1 <<endl;
        return Co(3*n +1,i) ;
      }
  else 
      return 0 ;
}

int main() {
 int x ;
 cout<< " Enter value of x ";
 cin>> x ;
 cout<< Co(x)<<endl;
}
