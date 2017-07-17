#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char card_name[3];
	int count = 0;
	
	while(card_name[0] != 'X')	// Close prg if he enter X
	{
		puts("Enter the Card_Name : ");
		scanf("%2s", card_name); //scanf work with &
	
		int val = 0;
	

		if((card_name[0] == 'K') || (card_name[0] == 'Q') || (card_name[0] == 'J') )
			val = 10;
		else if (card_name[0] == 'A')
			val = 11;
		else if(card_name[0] == 'X')
			continue; // or use goto aa . while then stop
		else 
			val = atoi(card_name); // strin To integer return 0 if it is not a number.
			if ((val < 1) || (val > 10))
			{		
				puts("I don't understand that value!");
				continue; // or use goto aa;	
			}

//////////////////////////////////////////////////////////////////////////////

		if ((val > 2) && (val < 7))
			count++;

		else if (val == 10)
			count--;


		printf("The count : %i\n", count);//else print the old value.
	
	}
	return 0;
}
