#include <stdio.h>

int main() {
    printf("   /\\_/\\   \n");
    printf("  ( o.o )  \n");
    printf("   > ^ <   \n");
    printf("Welcome Meow!  \n");
    
    int year = 0;
    
    printf("Choose a year to go from to year 1 to: ");
    scanf("%d", &year);
    FILE *pFile = fopen("listOfLeapYears.txt", "w");
    if (pFile == NULL) return 1;
    
    for (int i = 0; i <= year; i++)
    {
        if (i % 400 == 0)
        {
            fprintf(pFile,"year %d is Leap \n", i);
        }
        else if (i % 100 != 0 && i % 4 == 0)
        {
            fprintf(pFile,"year %d is Leap \n", i);
        }
        else
        {
            fprintf(pFile,"year %d is NOT Leap \n", i);
        }
    }
    
    fclose(pFile);
    printf("file 'listOfLeapYears.txt' created with sucess!\n");
    

    return 0;
}
