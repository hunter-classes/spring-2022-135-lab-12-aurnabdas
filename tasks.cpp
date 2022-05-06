#include <iostream>
#include <vector>
#include "tasks.h"



std::vector<int> makeVector(int n)
{
 std::vector<int> value;
 for(int i = 0 ; i< n; i++)
 {
     value.push_back(i);
 }
 return value;
 
}

std::vector<int> goodVibes(const std::vector<int> &v)
{
    std::vector <int> value;
    for(int i = 0; i< v.size(); i++)
    {
        if(v[i] > 0)
        {
            value.push_back(v[i]);
        }

    }
    return value;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    
    for(int i = 0; i < vegeta.size(); i++)
    {
        goku.push_back(vegeta[i]);
    
    }
    vegeta.clear();

}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
    std::vector<int> sum = v1.size() > v2.size() ? v1 : v2; 

    int size = v1.size() > v2.size() ? v2.size() : v1.size();

    for(int i = 0; i < size; i++)
    { 
        sum[i] = v1.at(i) + v2.at(i);
    }

    return sum;

}

