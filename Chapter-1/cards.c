/*
 *
 *
*/

#include <stdio.h>
#include <stdlib.h>

//

int main()
{
	char card_name[3];

	puts("Enter The card_name");
	scanf("%2", caed_name); //scanf work with & >> for steang
	
	int val = 0;
	
	if ((caed_name[0] == 'K') || ((caed_name[0] == 'Q') || ((caed_name[0] == 'J') )
		val = 10;
	else if (card_name[0] == 'A')
		val = 11;
	else
		val = atoi(card_name); //numbers = numbers ..string  = 0 
	
	printf("The Card Value IS %i.\n", val)

	return 0;

/*
  atoi == string to integer >> This function returns the converted integral number as an int value.
                               If no valid conversion could be performed, it returns zero.
S.no 	Typecast function 	Description
1 	atof() 	Converts string to float
2 	atoi() 	Converts string to int
3 	atol() 	Converts string to long
4 	itoa() 	Converts int to string
5 	ltoa() 	Converts long to string

*/
	
		
	
}
