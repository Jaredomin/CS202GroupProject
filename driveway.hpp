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
		int x = 0;
		std::cout << "Enter number: ";
		std::cin >> x;
        createdrive(x);
        printdriveway();
    }
    void moveblower()
    {

    }
private:
    void printdriveway()
    {
		/*
		int dim = sqrt(snow.size());
        std::cout << "Printing driveway mach 1: \n";
        for (int i = 0; i < dim; i++)
        {
			for (int j = 0; j < dim; j++)
			{
				std::cout << snow[i * dim + j] << "  ";
			}
			std::cout << std::endl;
        }
		*/
    }
    void createdrive(int x)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 10);
        for (int i = 0; i < (x * x - 1); i++)
        {
            snow.push_back(dis(gen));
        }
        for (int i = 0; i < snow.size(); i++)
        {
            if (snow[i] < 10)
            {
                snow[i] = 1;
            }
			else
			{
				snow[i] = 0;

			}
        }
        snow.push_back(9);
    }
    vector<int> snow;
};



#endif
