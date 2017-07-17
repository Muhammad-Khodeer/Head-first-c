/*
* Program to calculate the number of cards in the shoe.
* This code is released under the Vegas Public License.
* (c)2014, The College Blackjack Team.
*/
//----------------------------------------------------
#include <stdio.h> //The stdio library contains code that allows you to "read and write" data from and to the terminal.

//----------------------------------------------------
int main()
{
    int decks;
    puts("Enter the number of the decks... ");
    scanf("%i", &decks);
    if(decks < 1)
    {
        puts("sorry .. That is not a Valid Number of decks ! ");
        return 1;
    }
    printf("There are %i cards \n", (decks *52));
    return 0;
}







