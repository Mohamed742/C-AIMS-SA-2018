#include <array>
#include <iostream>
int main(int argc, char** argv)
{
std::array<int,4> a = {1,2,3,4};
//std::cout << a.size() << std::endl; // 4
for(auto i : a)
 std::cout<< i<<std::endl;
//a[2] = 4;
//std::cout << a[3];
}
