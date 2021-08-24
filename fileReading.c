/* Program made to count words, chars, and spaces, of a string of text*/
#include <stdio.h>

#DEFINE IN 1  /* Inside a word */
#DEFINE OUT 0 /* Outside a word */

int main(void)
{
  // To read in a file
  char ch, file_name[25];
  FILE *fp;

  printf("Enter name of file you wush to see\n");
  gets(file_name);

  fp = fopen(file_name, "r"); //read mode

  if (fp == NULL)
  {
    perror("Error while openning the file.\n");
    exit(EXIT_FAILURE);
  }

printf("The contents of the %s File are:\n", file_name);


}