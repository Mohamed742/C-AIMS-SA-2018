#include <iostream>
#include <vector>
#include <algorithm> 
#include<cmath>
 

int main() {
 std :: cout << "[" ;
std :: vector<double> vec1 = {0.12 , 11.568,0.000005,21.658,17.5};
       for (double x : vec1)
        std :: cout << round(x) << '\t';
        std :: cout << "]";
}
