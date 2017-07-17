// ./categorize UFO aliens.csv Elvis elvises.csv the_rest.csv //to run the prog
 

#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int main(int argc, char *argv[]) // Array of array ? real Array of pointers // i send the parameters then use it in my program

{
	char line[80];
		
	if (argc != 6)
	{	
		fprintf(stderr, "You Must Enter 5 arguments\n");
		return (1);
	}
	

	  FILE *file1 = fopen(argv[2], "w");
	  FILE *file2 = fopen(argv[4], "w");
	  FILE *file3 = fopen(argv[5], "w");


	//FILE *in = fopen("gpsdata.csv", "r");
	FILE *in;
	if (!(in = fopen("gpsdata.csv", "r"))) //fopen gives 0 if it didnot work well. OK ?!
	{	
		fprintf(stderr, "can't open the file gpsdata,csv");
		return (2);
	}

	while(fscanf(in, "%79[^\n]\n", line) == 1)
	{	
		if (strstr(line, argv[1]))
			fprintf(file1, "%s\n", line);
		else if (strstr(line, argv[3]))
			fprintf(file2, "%s\n", line);
		else
			fprintf(file3, "%s\n", line);
	}	
	
	fclose(file1);
	fclose(file2);
	fclose(file3);

	return (0);
}


