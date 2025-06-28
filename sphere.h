#define PI 3.14
float volume(int r)
{
	float vol;
	vol = (4.0 / 3.0) * PI * r * r * r;
	return vol;
}

float area(int r)
{
	float area;
	area = 4 * PI * r * r;
	return area;
}

float circumference(int r)
{
	float c;
	c = 2 * PI * r;
	return c;
	
}



