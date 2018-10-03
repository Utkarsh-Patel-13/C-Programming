#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"my_string.h"
#include<string.h>
#define n 10000

void main()
{

  clock_t t;
  FILE *f1;
  f1 = fopen("asd.txt","r");
  char ch;
  int size, i=0;

  fseek(f1,0,SEEK_END);
  size = ftell(f1);
  rewind(f1);

  char *str1 = (char *)malloc(size);
  char *str2 = (char *)malloc(size);

  while(feof(f1) == 0)
  {
    ch = getc(f1);
    if(feof(f1)==0)
    {
      str1[i++] = ch;
    }
  }
  str1[i] = '\0';
  printf("\n Total chars in file : %d \n", i);


  t = clock();
  strcpy(str2,str1);
  t = clock() - t;
  double time_taken = ((double)t);
  printf("\n Exec Time of strcpy : %f ", time_taken);

  t = clock();
  my_strcpy(str2,str1);
  t = clock() - t;
  time_taken = ((double)t);
  printf("\n Exec Time of my_strcpy : %f \n\n", time_taken);




  t = clock();
  strncpy(str2,str1,n);
  t = clock() - t;
  time_taken = ((double)t);
  printf("\n Exec Time of strncpy : %f ", time_taken);

  t = clock();
  my_strncpy(str2,str1,n);
  t = clock() - t;
  time_taken = ((double)t);
  printf("\n Exec Time of my_strncpy : %f \n\n", time_taken);




  t = clock();
  strlen(str1);
  t = clock() - t;
  time_taken = ((double)t);
  printf("\n Exec Time of strlen : %f ", time_taken);

  t = clock();
  my_strlen(str1);
  t = clock() - t;
  time_taken = ((double)t);
  printf("\n Exec Time of my_strlen  : %f \n\n", time_taken);


  free(str1);
  free(str2);
  fclose(f1);


}
