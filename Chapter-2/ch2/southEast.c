#include <stdio.h>


//prototypes
void go_south_east(int *lat, int *lon);


int main()
{
	int latitude = 32;
	int longitude =-64;
	
	go_south_east(&latitude, &longitude);

	printf("Avast now at : [%i, %i]\n", latitude, longitude);

	return 0;
}

void go_south_east(int *lat, int *lon)
{

	*lat += 1;
	*lon += 1;

}
