/*
 * a ship want to move to south east.
 *
 *
*/

#include <stdio.h>

//prototype
void go_south_east(int *lat, int *lon);


//The main function

int main()
{
    int latitude = 4000;
    int longitude = 5000;

    go_south_east(&latitude,&longitude);

    printf("Avast ! now at [%i,%i]", latitude, longitude);

    return 0;
}

void go_south_east(int *lat, int *lon)
{
    *lat += 1;
    *lon += 1;
}




