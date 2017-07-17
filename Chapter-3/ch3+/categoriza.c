#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char line[80];
	
	// make 3 files streams 3out and 1 in.

	FILE *in = fopen("gpsdata.csv", "r");
	FILE *file1 = fopen("ufos.csv", "w");
	FILE *file2 = fopen("disappearances.csv", "w");
	FILE *file3 = fopen("others.csv", "w");
	
	// what we will do withfiles ?!

	while (fscanf(in, "%79[^\n]\n", line) == 1)	
	{
		if (strstr(line, "UFO"))
			fprintf(file1, "%s\n", line);
		else if (strstr(line, "Disappearance"))	
			fprintf(file2, "%s\n", line);
		else
 			fprintf(file3, "%s\n", line);
	}
	
	// we should close the files ok ?
	
	fclose(file1);
	fclose(file2);
	fclose(file3);

	return 0;

}
