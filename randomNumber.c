#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>


int main() {

  srand(time(NULL));

  int guess = 0;
  int tries = 0;
  int min = 1;
  int max = 100;
  int answer = rand() % (max - min + 1) + min;

  printf("*** NUMBER GUESSING GAME***\n");
  do
  {
    printf("Guess a number between %d - %d: ", min, max);
    scanf("%d", &guess);
    tries++;
    if (guess > answer)
    {
      printf("The number is  LOWER!\n");
    }
    else if (guess < answer)
    {
      printf("The number is HIGHER!\n");
    }
    else
    {
      printf("CORRECT!!!\n");
    }
    
    
    
  } while (guess != answer);
  printf("The number is %d\n", answer);
  if (tries == 1)
  {
    printf("It took you just one try!");
  }
  else
  {
    printf("It Took your %d tries", tries);
  }
  

  return 0;
}
