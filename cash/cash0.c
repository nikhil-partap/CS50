# include <stdio.h>
#include <cs50.h>
void callammount (void );

int main(void )
{
    int amount = get_int("what's x? ");
    while ( amount < 0 )
    {
        callammount();
    }
     //  divide amount by 25
     int quater = amount / 25;

     int total_of_quaters = quater * 25;

    // divide the remaining amount by 10
     int dime = amount - total_of_quaters / 10;

     int total_of_dime = dime*10;

    // divide the remaning(amount - total_of_quaters - total_of_dime) by 5
    int nickel = amount - total_of_quaters - total_of_dime / 5;

    int total_of_nickel = nickel * 5;

    // divide the remaning(amount - total_of_quaters - total_of_dime - total_of_nickel) by 1
    int penny = amount - total_of_quaters - total_of_dime - total_of_nickel / 1;



}

void int25 (int )
{
    //  divide amount by 25
     int quater = amount / 25

     int total_of_quaters = quater * 25

}
void int10 (int amount)
{
    // divide the remaining amount by 10
     int dime = amount - total_of_quaters / 10

     int total_of_dime = dime*10
}
void int5 (int amount)
{
    // divide the remaning(amount - total_of_quaters - total_of_dime) by 5
    int nickel = amount - total_of_quaters - total_of_dime / 5

    int total_of_nickel = nickel * 5
}
void int1 (int amount)
{
    // divide the remaning(amount - total_of_quaters - total_of_dime - total_of_nickel) by 1
    int penny = amount - total_of_quaters - total_of_dime - total_of_nickel / 1

}

void callammount (void )
{
    int amount = get_int("what's x? ");
}
