#include <math.h>
#define pi  3.14
float area_cone(int h,int r)
{
	float a,l;
	l = (float)sqrt(r * r + h * h);
	a = (float)pi * r * (r+l);
	return a;
}

float volume_cone(int h,int r)
{
	float v;
	v = (0.33 * pi * r * r * h);
	return v;
}
