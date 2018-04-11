#include <stdio.h>
#include <string.h>

struct app {
  char buff[15];
  char tempbuff[15];
  int pass;
};

int main(void)
{
  struct app app;
  app.pass = 0;

  printf("\n Enter a password of length between 1 and 15 characters : \n");
  gets(app.buff);
  //strcpy("%s",buff);

  printf("\n Enter your password : \n");
  gets(app.tempbuff);
  //strcpy("%s",tempbuff);

  if(strcmp(app.tempbuff, app.buff))
    {
      printf ("\n Wrong Password \n");

    }
  else
    {
      printf ("\n Correct Password \n");
      app.pass = 1;
    }

  if(app.pass)
    {
      /* Now Give root or admin rights to user*/
      printf ("\n Root privileges given to the user \n");
    }

  return 0;
}
