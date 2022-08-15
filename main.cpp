#include <iostream>
#include "vector"

int input(std::string prompt){
    int q;
    std::cout << prompt;
    std::cin >>q;
    return q;
}

void print(std::vector<int> vec){
    if (vec.empty()) return ;
    for(int i=0;i<vec.size();++i) std::cout << vec[i] << " ";
    std::cout << std::endl;
}

int main() {
    //Complete vector
    std::vector<int> vec(input("Input size of vector:"));
    for(int i=0;i<vec.size();++i) vec[i]=input("#"+std::to_string(i)+":");
    print(vec);
// delete
    int del,size;
    do {
        del = input("Input number to delete:");
        size = vec.size();
        int count;
        do {
            count = 0;
            for (int k = 0; k < vec.size() - 1; ++k) {
                if (vec[k] == del) std::swap(vec[k], vec[k + 1]);
            }
            if (vec.back() == del) {
                vec.pop_back();
                ++count;
            }
    //        print(vec);
        } while (count != 0 && !vec.empty());
        print(vec);
    }while(!vec.empty());
    return 0;
}
