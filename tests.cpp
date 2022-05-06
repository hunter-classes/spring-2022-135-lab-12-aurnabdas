
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector> 
#include <string>
#include "tasks.h" 



std::string string(std::vector<int> &vect) { 
    std::string temp = "";

    for(int a : vect) 
	{ 
        temp += std::to_string(a) + " ";
    }

    return temp;
}

TEST_CASE("task a") 
{ 
    
    std::vector<int> test_one = makeVector(10); 
	std::vector<int> test_two = makeVector(-3); 
	std::vector<int> test_three = makeVector(3);
	std::vector<int> test_four = makeVector(1);

    CHECK(string(test_one) == "0 1 2 3 4 5 6 7 8 9 "); 
	CHECK(string(test_two) == ""); 
	CHECK(string(test_three) == "0 1 2 "); 
	CHECK(string(test_four) == "0 "); 

}

TEST_CASE("turn b")
{
	std::vector <int> test_five = { 1, 2, -1 ,3 ,4, -1 ,6 }, a = goodVibes(test_five);
	std::vector <int> test_six = { 0,0,0,0,0,0} , b = goodVibes(test_six);
	std::vector <int> test_seven = { -1 , -1 ,6 }, c = goodVibes(test_seven);
	

	CHECK(string(a) == "1 2 3 4 6 "); 
	CHECK(string(b) == ""); 
	CHECK(string(c) == "6 "); 

}

TEST_CASE("task c")
{
	std::vector<int> test_one{1,2,3}, test_two{4,5};
	gogeta(test_one, test_two);
	CHECK(string(test_one) == "1 2 3 4 5 ");
	CHECK(string(test_two) == "");
	std::vector<int> test_three = {9,8}, test_four = {2,3,4,5};
	gogeta(test_three, test_four);
	CHECK(string(test_three) == "9 8 2 3 4 5 ");
	CHECK(string(test_four) == "");
	std::vector<int> test_five{9,9,9}, test_six{9,9,9};
	gogeta(test_five, test_six);
	CHECK(string(test_five) == "9 9 9 9 9 9 ");
	CHECK(string(test_six) == "");
}


TEST_CASE("task d")
{
	std::vector<int> test_one{1,2,3};
    std::vector<int> test_two{4,5};
	std::vector<int> test_three = sumPairWise(test_one,test_two);
	CHECK(string(test_three) == "5 7 3 ");
	std::vector<int> test_four{1,2};
    std::vector<int> test_five{4,5,6};
	std::vector<int> test_six = sumPairWise(test_four,test_five);
	CHECK(string(test_six) == "5 7 6 ");
	std::vector<int> test_seven{0,6,2};
    std::vector<int> test_eight{5,2,6};
	std::vector<int> test_nine = sumPairWise(test_seven,test_eight);
	CHECK(string(test_nine) == "5 8 8 ");




}
