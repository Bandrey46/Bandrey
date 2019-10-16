#include "functions.h"
#include <iostream>
int main(int argc, char** argv)
{
	double rad, area, length;
	rad=15.9;
	area_circle(rad, area, length);
	std::cout <<"Circle, radius:"<< rad << std::endl;
	std::cout <<"Area:"<< area << std::endl;
	std::cout <<"Length:"<< length << std::endl;
return 0;
}