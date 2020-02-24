#ifndef DRIVEWAY_HPP_
#define DRIVEWAY_HPP_

#include <iostream>
#include <random>
#include <vector>
using std::vector;

class driveway
{

public:
    driveway()
    {
        createdrive();
        printdriveway();
    }
    void moveblower()
    {

    }
private:
    void printdriveway()
    {
        std::cout << "Printing driveway mach 1: \n";
        for (int i = 0; i < 5; i++)
        {
            std::cout << snow[i*5] << "  ";
            std::cout << snow[i*5+1] << "  ";
            std::cout << snow[i*5+2] << "  ";
            std::cout << snow[i*5+3] << "  ";
            std::cout << snow[i*5+4] << "  ";
            std::cout << std::endl;
        }
    }
    void createdrive()
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 8);
        for (int i = 0; i < 24; i++)
        {
            snow.push_back(dis(gen));
        }
        for (int i = 0; i < 24; i++)
        {
            if (snow[i] < 8)
            {
                snow[i] = 1;
            }
        }
        snow.push_back(9);
    }
    vector<int> snow;
};



#endif
