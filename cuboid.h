
float surfaceArea_cuboid (int l, int b, int h) 
{
	return 2 * (l*b + b*h + h*l);
}

float volume_cuboid (int l, int b, int h) 
{
    return (l * b * h);
    
}

float spaceDiagonal_cuboid (int l, int b, int h) 
{
    return sqrt(l*l + b*b + h*h);
}
