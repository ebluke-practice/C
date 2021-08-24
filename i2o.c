#include <stdio.h>

int main(void)
{
  int c; 
  c = getchar();
  while (c != EOF) // while c is not the end of file
  {
    putchar(c);  //print c
    c = getchar(); //get the next character than loop again until eof
   }
}