//Carreira de aprendizado c - https://www.w3schools.com/

//Anotações
/* floatvs.double
A precisão de um valor de ponto flutuante indica quantos dígitos o valor pode ter após a vírgula decimal. 
A precisão de floaté de seis ou sete dígitos decimais, enquanto doubleas variáveis ​​têm uma precisão de cerca de 15 dígitos. 
Portanto, geralmente é mais seguro usá-lo doublepara a maioria dos cálculos -
mas observe que ele ocupa o dobro da memória (float 8 bytes versus 4 bytes).  */

//Armazenamento de var - memória
/* 
Data Type    Size
  int	      2 or 4 bytes
  float	    4 bytes
  double	  8 bytes
  char	    1 byte 
*/

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

//********************************************TAMANHO_DA_MEMORIA****************************************************************

#include <stdio.h>

int main() {
 int myInt;
 float myFloat;
 double myDouble;
 char myChar;
 /* Observe que usamos o %luformato específico para imprimir o resultado, em vez de %d. 
 É porque o compilador espera que o operador sizeof retorne um long unsigned int( %lu), em vez de int( %d). 
 Em alguns computadores pode funcionar com %d, mas é mais seguro usar %lu.*/
 printf("%lu\n", sizeof(myInt));
 printf("%lu\n", sizeof(myFloat));
 printf("%lu\n", sizeof(myDouble));
 printf("%lu\n", sizeof(myChar));
  
  return 0;
}
//*******************************************Operadores_de_atribuicao**********************************************************

//Alguns valores vão retornar zerados por receberem a atribuição anterior, its ok.
 //operadores de atribuição:
    //trata-se de uma operação de bit 
    // 2 em bin =   00000010
    //três em bin = 00000011
    //portanto, basta somar de acordo com a tabela verdade
#include <stdio.h>

int main(){
   int x = 2;
    int a = 2;

    //Atribuição com OR binário
    // é o mesmo que x=x|3
    x |= 3;
    printf("%d\n",x);

    //Atribuição com XOR binário
    // é o mesmo que x=x^3
    x ^= 3;
    printf("%d\n", x);

    //Atribuição com AND binário
    // é o mesmo que x=x&3
    a &= 3;
    printf("%d\n", a);

    //Atribuição de deslocamento a esquerda
    // é o mesmo que x=x>>3
    x >>= 3;
    printf("%d\n", x);

    //Atribuição com deslocamento a direita
    // é o mesmo que x=x<<3
    x <<= 3;
    printf("%d\n", x);
    return 0;
}

/*//Operadores lógicos

    //AND lógico
    int x = 5;
    int y = 3;
    // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
    printf("%d\n", x > 3 && x < 10);


    // OR lógico
    int x = 5;
    int y = 3;
    // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
    printf("%d\n", x > 3 || x < 4);


    //NOT lógico
    int x = 5;
    int y = 3;
    // Returns false (0) because ! (not) is used to reverse the result
    printf("%d\n", !(x > 3 && x < 10));
    return 0;
}*/
//*******************************************************CONDITIONS**********************************************************

  #include <stdio.h>

int main() {
  int age;
  printf("Enter yor age, please:\n");
  scanf("%d",&age);
  if (age < 18) {
    printf("You are still very young.");
  } else {
    printf("It's OK, guy. Released");
  }
  return 0;
}
//Operador ternário
/*int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");*/

//******************************************************SWITCH******************************************************************

#include <stdio.h>

int main() {
  int day ;
  printf("Digite um numero que corresponda a um dia da semana:\n");
  scanf("%d",&day);
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
      printf("Looking forward to the Weekend");
  }
    
  return 0;
}

//**************************************************PRECEDENCIA_DE_OPERADORES*******************************************************

MAIOR          () [] ->
               ! ~ ++ -- - (tipo) * sizeof
               * / %
               + - 
               << >>
               < <= > >=
               == !=
               &
               ^
               !
               &&
               !!
               ?:
               = += -= *= /= etc.
MENOR          ,
              
