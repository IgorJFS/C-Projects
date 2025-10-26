#include <stdio.h>
#include <ctype.h>

//cores opcionais, funcionam apenas em alguns terminais
#define GREEN   "\x1b[32m"
#define RED     "\x1b[31m"
#define YELLOW     "\x1b[33m"
#define BLUE     "\x1b[34m"
#define RESET   "\x1b[0m"

int main() {

  char questions[][100] = {"What is the largest planet in the solar system?", "What is the hottest planet in the solar system?", "What planet has the most moons?", "What is the coldest planet on earth?"};

  char option[][100] = {"A. Jupiter\nB. Saturn\nC. Mars\nD. Earth\n", "A. Jupiter\nB. Mercury\nC. Venus\nD. Neptune\n", "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n", "A. Jupiter\nB. Saturn\nC. Uranus\nD. Earth\n"};

  char anwserKey[] = {'A', 'B', 'D', 'C'};

  int questionCount = sizeof(questions) / sizeof(questions[0]);
  char guess = '\0';
  int score = 0;

  printf(YELLOW"*** QUIZ GAME ***\n"RESET);

  for (int i = 0; i < questionCount; i++)
  {
    printf("\n%s\n", questions[i]);
    printf("\n%s", option[i]);

    
    while (1) //note: use while(1) because it forces to loop to happen, because it is always true
    {
      printf("Enter your choice: ");
      scanf(" %c", &guess);
      guess = toupper(guess);
      
      if (guess == 'A' || guess == 'B' || guess == 'C' || guess == 'D')
      {
        break;
      }
      else
      {
        printf(YELLOW"Invalid choice! Please enter A, B, C, or D.\n"RESET);
      }
    }
    
    if (guess == anwserKey[i])
    {
      printf(GREEN "CORRECT!\n"RESET);
      score++;
    }
    else
    {
      printf(RED"WRONG!\n"RESET);
    }
    
    
  }

  printf(BLUE"Your Final score is %d out of %d points (each correct answser is 1 point)" RESET, score, questionCount);

  return 0;
}
