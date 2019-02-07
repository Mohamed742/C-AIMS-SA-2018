#include <iostream>
#include <vector>
#include <algorithm> 
#include<cmath>
 
int main(){
 std :: cout << "[";
    std::vector<int> vec2(7);
    for (int i = 0 ; i < vec2.size();i++){
       std ::cin >> vec2[i];}
    std :: cout << "]" << '\n';
    // reverse order of vector
    std :: cout << " The reverse of vec2" <<'\n';
    std :: cout<< "[";
    std :: reverse(vec2.begin(),vec2.end());
    for(auto l : vec2) //to show the elements in the vector after reversing 
    std :: cout<< l<<'\t';
    std :: cout << "]";

}
