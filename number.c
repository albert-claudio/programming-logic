#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "portuguese");

 int i;
 int number;
 int count = 0;

 for (i = 0; i <= 5; i++)
 {
   printf("Digite o %d números: ", i);
   scanf("%d", &number);

    //soma = soma + number
   count += number;
 }

    printf("count: %d\n", count);
  

    return 0;
}