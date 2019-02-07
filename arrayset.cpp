#include <array>
#include <iostream>
//#include<bits/stdcc++.h>
using namespace std;
int main(int argc, char** argv)
{
//std::array<pair<int,int>,4 > a = {};
//int x,y ,w;
 //cin>>x>>y>>w;
 //a[x].push_back({x,y});
 //a[y].push_back({w,x});
//std::cout << a.size() << std::endl; // 4
//for(auto i : a)
 //std::cout<< i<<std::endl;

 deque<vector<pair<int,int>>> d{};

 d = {{{3,4},{1,2}}};
 for (auto i :d) {
    for(auto j :i)
     cout <<j.first <<' ' << j.second << '\n';
}
}
