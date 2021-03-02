/*The code calculates the surface area and volume of the square pyramid */

#include <stdio.h>
#include<math.h>

	int main () {

	float length;
	float height;
	float area;
	float volume;
	const double PI = 3.14159265;

	printf("Please enter the length of the base square:");
	scanf("%f" , &length);
	printf("Please enter the height length:");
	scanf("%f" , &height);

	area= (2*length*sqrt((height*height)+((length*length)/4.0)))+length*length;
	volume= (length*length*height)/3;
	
	printf("The surface area of square pyramid is %.2f\n" ,area);
	printf("The volume of square pyramid is %.2f" ,volume);
	
	return 0;
}
