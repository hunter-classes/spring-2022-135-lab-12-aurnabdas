#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> vect{ 10, 20 };
 
    for (int x : vect)
        std::cout << x << " ";
 
    return 0;
}