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
    std::cout << "____________________" << std::endl;
    std::cout << "task a:" << std::endl;
    std::vector <int> value = makeVector(10);
    print(value);

    std::cout << "____________________" << std::endl;
    std::cout << "task b" << std::endl;
    
    std::vector <int> v = { 1, 2, -1 ,3 ,4, -1 ,6 };
    print(v);
    print(goodVibes(v));

    std::cout << "____________________" << std::endl;
    std::cout << "task c" << std::endl;

    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2= {4,5};
    print(v1);
    print(v2);

    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
    print(v1);
    print(v2);

    std::cout << "____________________" << std::endl;
    std::cout << "task d: " << std::endl;
    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};

    print(sumPairWise(v3, v4)) ; // returns [5, 7, 3]


    return 0;
}