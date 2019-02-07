#include <iostream>
#include <vector>



std::vector<int> swapvec(std::vector<int>a)
{
    for (int i = 1; i < a.size(); ++i){
        for (int j = 0; j < a.size() - 1; ++j){
            if (a[j] < a[i]) std::swap(a[j], a[i]);
        }
    }

    return a;
}
 

int main()
{
    std :: cout << "[";
    std::vector<int> v(7);
    for (int i = 0 ; i < v.size();i++){
       std ::cin >> v[i];}
    std :: cout << "]" << '\n';
    std :: cout << "[" << '\n';

    for (int i = 0; i < v.size(); ++i){
        std::cout << swapvec(v)[i] <<'\t';
    
    }
  std :: cout << "]";
}
