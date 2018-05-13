#include <stdio.h>
#include <cs50.h>

/**
/
/
int main (void)\
{
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			printf ("# \n");
		}
		printf ("\n");
	}
}
/
**/


int main(void)
{
    int height;
    
    do
    {
        printf("Type positive int from 0 yo 23: \n");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    printf("Weight is %i\n", height);
    
/**
/    
    
    for (int i = 0; i < height; i++)
    {
        for (int spaces = 10; spaces > 0; spaces--)
        {
            printf(" ");
        }
        for (int hash = 0; hash < 5; hash++)
        {
            printf("#");
        }
        printf("\n");

    }
/
**/

    for (int i = 0; i < height; i++)
    {
        for (int a = 0; a<=height; a--)
        {
            char space = height -1;
            char hash = height;
            
            printf("%c", space);
            
              
      
        }
/**        
        for (int j = 0; j<=height; j++)
        {
            string tr = "#";
            printf("%s", tr++);
        }
        
        
        
        printf("1");
        printf("%i", height--);
        printf ("\n");
        
        
        
    
    
    }
**/
    }
}
