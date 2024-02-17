//Carreira de aprendizado c - https://www.w3schools.com/

//**********************************************HELLO_WORLD*****************************************************************

#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}

//*************************************************USER_INPUT*****************************************************************

#include <stdio.h>

int main() {
  // Cria variáveis int e char
  int myNum;
  char myChar;

  // Pede que o user insira um N° e um caracter
  printf("Type a number AND a character and press enter: \n");

  // Armazena o end. de memória da variável
  scanf("%d %c", &myNum, &myChar);

  // Printa o numero
  printf("Your number is: %d\n", myNum);

  // Printa o caracter
  printf("Your character is: %c\n", myChar);
  
  return 0;
}

//***********************************************STRING_INPUT*********************************************************************
