#include<iostream>
using namespace std;
int pow_itreative(int q, int n){

  int out = 1 ;
   for( int i = 0 ; i < n;i++)
       out *= q;
       return out;
}

int main() {
    int x;
    int y;
    cout<< " Enter value for x" ;
    cin >> x;
    cout << "enter value of y" ;
    cin >> y ;
    cout<< x<< "^" << y << "=" << pow_itreative(x,y)<< endl;
    return 0;
}
