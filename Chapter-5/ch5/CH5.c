#include <stdio.h>\



typedef enum
{
    COUNT, POUNDS, PINTS
} unit_of_measure;


typedef union
{
    short count;
    float weight;
    float volume;
} quantity;

typedef struct
{
    const char *name;      //1
    const char *country;   //2
    quantity amount;       //3
    unit_of_measure units; //4
} fruit_order;

void display(fruit_order older)   // the parameter is a struc variable consists of 4 variables wanna receive them (4)
{
    printf("This older contains ");

    // I have three cases

    if( older.units == PINTS )
        printf("%2.2f PINTS of %s\n", older.amount.volume, older.name);

    else if( older.units == POUNDS )
        printf("%2.2f POUNDS of %s\n",older.amount.weight, older.name);

    else if( older.units == COUNT)
        printf("%i %s\n",older.amount.count, older.name);

    else
        printf("ERROR");
}

int main()
{
    fruit_order apples = {"apples", "England", .amount.count=144, COUNT};
    fruit_order strawberries = {"strawberries", "Spain", .amount.weight=17.6, POUNDS};
    fruit_order oj = {"orange juice", "U.S.A", .amount.volume=10.5, PINTS};

    display(apples);
    display(strawberries);
    display(oj);

    return (0);
}
