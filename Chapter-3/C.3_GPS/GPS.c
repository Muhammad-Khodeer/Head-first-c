/*
 *This program can read comma-separated data from the command line and then display it in
 *Pocket Code JSON format
*/

#include <stdio.h>


int main()
{
    float latitude;
    float longitude;
    char info[80];

    int started = 0;

    puts("Data ["); // print string

    while ( scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3 )
        //We’re using scanf() to enter more than one piece of data
        //scanf always uses pointers
        //scanf function return the number of values it able to read.
    {

        if (started)
            printf(",\n");

        else
            started = 1;

        printf("{ latitude: %f, longitude: %f, info: %s }", latitude, longitude, info);

    }

    puts ("\n]");

    return 0;




}
