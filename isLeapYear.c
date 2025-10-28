#include <stdio.h>

int main() {
    
    int year = 0;

    printf("Choose a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("é Bissexto");
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("é Bissexto");
    }
    else
    {
        printf("Não é bissexto");
    }
    
    
    
    

    return 0;
}
