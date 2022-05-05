#include <iostream>
#include <vector>
#include "tasks.h"

void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::cout << "task a:" << std::endl;
    // std::vector <int> value = makeVector(10);
    // print(value);

    std::cout << "task b" << std::endl;
    
    // std::vector <int> v = { 1, 2, -1 ,3 ,4, -1 ,6 };
    // print(v);
    // print(goodVibes(v));


    return 0;
}