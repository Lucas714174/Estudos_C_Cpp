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

#include <stdio.h>

int main() {
  // Create a string
  char fullName[30];

  // Ask the user to input some text (full name)
  printf("Type your full name and press enter: \n");

  // Get the text
  fgets(fullName, sizeof(fullName), stdin);

  // Output the text
  printf("Hello %s", fullName);
  
  return 0;
}


//************************************************POT_10**************************************************************************

#include <stdio.h>

int main() {
  float f1 = 35e3;
  double d1 = 12E4;
  
  printf("%f\n", f1);
  printf("%lf", d1);
  return 0;
}
