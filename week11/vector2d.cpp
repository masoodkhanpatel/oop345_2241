#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> arr;
    arr.push_back({1,2,3});
    arr.push_back({1,2,3,4});
    arr.push_back({1,2,3,4,8});

    for(auto row:arr){
        for(auto column:row){
            std::cout << column << " ";
    }
    std::cout << "\n";
  }
}