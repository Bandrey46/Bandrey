#include <math.h>
void area_circle(double radius, double &area, double &length)
{
	area=M_PI*radius*radius;
	length=M_PI*2*radius;
}