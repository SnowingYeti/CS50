#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int hashTimes = 2;
    int spaceTimes = 0;
    
    //get height from user
    do
    {
        printf("Height: ");
        height = GetInt();
    }while (height < 0 || height > 23);
    
    
    //generate pyramid
    spaceTimes = height + 1 - hashTimes;
    while (spaceTimes > -1)
    {
        int spaceLeft = spaceTimes;
        int hashLeft = hashTimes;
        
        while (spaceLeft > 0)
        {
            printf(" ");
            spaceLeft--;
        }
        
        while (hashLeft > 0)
        {
            printf("#");
            hashLeft--;
        }
        printf("\n");
        spaceTimes--;
        hashTimes++;
    }
}
