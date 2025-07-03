#include<stdio.h>
#include<cs50.h>
void pyramid_1 (int hight );
void pyramid_2 (int hight);

int main (void)
{
    int hight = get_int("What do you want the hight of the Pyramid to be? ");
    if ( hight <= 8)
    {
        pyramid_1( hight );
        printf("  ");
        pyramid_2( hight );
    }

}



//\\//\\// combining two pyramids is not working maybe because they are different/seprate so i have to write a single program which make both the pyramids at once
  // required result - https://cs50.harvard.edu/x/psets/1/mario/more/




















void pyramid_2 (int hight)
{
    int k = hight ;
    for (int i = 0; i < k; i ++)
    {
        for(int j = 0 ; j <= i; j ++ )
        {
            printf ("#");

        }
        printf ("\n");
    }
}





void pyramid_1 (int hight )
{

{int k = hight ;

    for (int n = 0; n < k; n ++)

    {


    for (int i = 0; i < (k-n); i ++ )
    {
        printf (" ");

    }
    for (int j = 0; j <= (n); j++ )
    {
        printf ("#");
    }
    printf ("\n");
    }


}

}
