#include <cs50.h>
#include <stdio.h>

void pyramid(int n);

// some comments 
//@kingjuno
int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8));
    
    pyramid(height);
}

// prints empty spaces
void space(int l)
{
    for (int k = 0; k < l; k++)
    {
        printf(" ");
    }    
}

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    { 
        space(n - i - 1);
        // prints the actual ramp
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        } 
        
        space(2);
        // prints the actual ramp
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        } 
        
        // moves one line down
        printf("\n");
    }
}
