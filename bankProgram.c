#include <stdio.h>

void checkBalance(double balance);
double deposit(double balance, double ammount);
double withdraw(double balance, double ammount);
void clearInputBuffer();

int main(){
  int choice = 0;
  double balance = 50.00;
  double ammount = 0.0;
  do{
  printf("\n--- Bank Menu ---\n");
  printf("Select an option: \n\n");
  printf("1. Check Balance\n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
  printf("4. Exit\n\n");

  printf("Enter your choice: ");
  if (scanf("%d", &choice) != 1) {
    printf("Invalid input. Try again.\n");
    clearInputBuffer();
    continue;
  }

  
  switch (choice)
  {
  case 1:
    checkBalance(balance);
    break;
  case 2: 
    printf("The ammount you wanna deposit: ");
    scanf("%lf", &ammount);
    balance = deposit(balance, ammount);
    printf("New Balance: $%.2lf\n", balance);
    break;
  case 3:
    printf("The ammount you wanna withdraw: ");
    scanf("%lf", &ammount);
    balance = withdraw(balance, ammount);
    printf("Your Balance: $%.2lf\n", balance);
    break;
  case 4:
    printf("Exiting...\n");
    break;
  default:
  printf("Invalid option. Try again.\n");
  break;
  }

  } while (choice != 4);
  return 0;
}

void checkBalance(double balance){
  printf("Your current ballance is $%.2lf\n", balance);
}

double deposit(double balance, double ammount){
  if (ammount <= 0)
  {
    printf("Invalid transaction\n");
    return balance;
  }
  printf("Successfully deposited $%.2lf\n", ammount);
  return balance + ammount;
}

double withdraw(double balance, double ammount){
  if (ammount <= 0)
  {
    printf("Invalid transaction\n");
    return balance;
  } else if (ammount > balance)
  {
    printf("You cannot withdraw more than you have.\n");
    return balance;
  }
  
  printf("Successfully withdraw $%.2lf\n", ammount);
  return balance - ammount;
}
//Essa parte do código foi escrito por IA, preciso estudar depois sobre esse input buffer
//Problema que ele resolve é, se o usuário digitar uma letra, o programa entra em Loop infinito;
void clearInputBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}
