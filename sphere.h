#define PI 3.14
float volume_sphere(int r)
{
	float vol;
	vol = (4.0 / 3.0) * PI * r * r * r;
	return vol;
}

float area_sphere(int r)
{
	float area;
	area = 4 * PI * r * r;
	return area;
}

float circumference_sphere(int r)
{
	float c;
	c = 2 * PI * r;
	return c;
	
}



