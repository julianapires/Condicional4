#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");

    int numb;
    
    printf ("Informe um n�mero inteiro: ");
    scanf  ("%d", &numb);
    
    if (numb%2 !=0)
    {
       printf ("Este n�mero � �mpar!\n");
    }else
        {
               printf ("Este n�mero � par!\n");
        }        
  
  system("PAUSE");	
  return 0;
}
