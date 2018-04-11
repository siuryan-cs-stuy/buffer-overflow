#include <stdio.h>
#include <string.h>

int main(void)
{
  char buff[15];
  int pass = 0;
  char tempbuff[15];
  
  printf("Enter a password of length between 1 and 15 characters:");
  gets(buff);

  printf("\nEnter your password:");
  gets(tempbuff);

  if(strcmp(tempbuff, buff))
    {
      printf ("\nWrong Password\n");
    }
  else
    {
      printf ("\nCorrect Password\n");
      pass = 1;
    }

  if(pass)
    printf ("\nRoot privileges given to the user \n");

  return 0;
}
