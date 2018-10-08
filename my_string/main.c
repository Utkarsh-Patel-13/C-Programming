#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"my_string.h"
#include<string.h>
#define n 10000

int main()
{

  clock_t t;
  FILE *f1, *f2;
  f1 = fopen("char_file.txt", "r");
  f2 = fopen("data.txt", "a");
  char ch;
  int size, i=0;

  fseek(f1,0,SEEK_END);
  size = ftell(f1);
  rewind(f1);

  char *str1 = (char *)malloc(size);
  size = size*2;
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
  t = (clock() - t);
  double time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of strcpy : %f ", time_taken);
  fprintf(f2, " %lf ", time_taken );

  t = clock();
  my_strcpy(str2,str1);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of my_strcpy : %f \n\n", time_taken);
  fprintf(f2, "%lf ", time_taken );



  t = clock();
  strncpy(str2,str1,n);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of strncpy : %f ", time_taken);
  fprintf(f2, "%lf ", time_taken );

  t = clock();
  my_strncpy(str2,str1,n);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of my_strncpy : %f \n\n", time_taken);
  fprintf(f2, "%lf ", time_taken );



  t = clock();
  strlen(str1);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of strlen : %f ", time_taken);
  fprintf(f2, "%lf ", time_taken );

  t = clock();
  my_strlen(str1);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of my_strlen  : %f \n\n", time_taken);
  fprintf(f2, "%lf ", time_taken );


  my_strcpy(str2,str1);

// Taking the worst case for comparing strings, that is both the strings are same, so the function will check till the last
  t = clock();
  int x = strcmp(str1,str2);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of strcmp : %f ", time_taken);
  fprintf(f2, "%lf ", time_taken );


  t = clock();
  x = my_strcmp(str1,str2);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of my_strcmp  : %f \n\n", time_taken);
  fprintf(f2, "%lf ", time_taken );


  my_strcpy(str2,str1);
// strcmpi() is not available in C library (But it is available in C++ library)
  t = clock();
  x = my_strcmpi(str1,str2);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of my_strcmpi  : %f \n\n", time_taken);
  fprintf(f2, "%lf ", time_taken );



  t = clock();
  x = strncmp(str1,str2,n);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of strncmp : %f ", time_taken);
  fprintf(f2, "%lf ", time_taken );


  t = clock();
  x = my_strncmp(str1,str2,n);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of my_strncmp  : %f \n\n", time_taken);
  fprintf(f2, "%lf ", time_taken );




// Taking the worst case for comparing strings, that is both the strings are same, so the function will check till the last
  t = clock();
  x = memcmp(str1,str2,n);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of memcmp : %f ", time_taken);
  fprintf(f2, "%lf ", time_taken );

  t = clock();
  x = my_memcmp(str1,str2,n);
  t = clock() - t;
  time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\n Exec Time of my_memcmp  : %f \n\n", time_taken);
  fprintf(f2, "%lf \n", time_taken );



  free(str1);
  free(str2);
  fclose(f1);
  fclose(f2);
  return 0;

}
