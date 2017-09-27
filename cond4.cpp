#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");

    int numb;
    
    printf ("Informe um número inteiro: ");
    scanf  ("%d", &numb);
    
    if (numb%2 !=0)
    {
       printf ("Este número é ímpar!\n");
    }else
        {
               printf ("Este número é par!\n");
        }        
  
  system("PAUSE");	
  return 0;
}
