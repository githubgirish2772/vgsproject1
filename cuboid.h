#include "cuboid.h"
#inlude "sphere.h"

float surfaceArea (int l, int b, int h) 
{
	return 2 * (l*b + b*h + h*l);
}

 int volume (int l, int b, int h) 
{
    return (l * b * h);
    
}

float spaceDiagonal (int l, int b, int h) 
{
    return sqrt(l*l + b*b + h*h);
}
