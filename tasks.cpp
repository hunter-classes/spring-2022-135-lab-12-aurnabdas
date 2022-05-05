#include <iostream>
#include <vector>
#include "tasks.h"



std::vector<int> makeVector(int n)
{
 std::vector<int> value;
 for(int i; i< n-1; i++)
 {
     value.push_back(i);
 }
 return value;
 
}

std::vector<int> goodVibes(const std::vector<int> &v)
{
    std::vector <int> value;
    for(int i = 0; i<=v.size(); i++)
    {
        if(v[i] >= 0)
        {
            value.push_back(i);
        }

    }
    return value;
}
