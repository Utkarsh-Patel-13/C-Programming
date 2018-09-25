#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>


// STRCPY
char* my_strcpy(char* dest, const char* src)
{
  int i;

  for(i=0 ; src[i]!='\0'; i++)
  {
    dest[i] = src[i];
  }
  dest[i] = '\0';
  return dest;
}

//STRNCPY
char* my_strncpy(char* dest, const char* src, int n)
{
  int i;

  for(i=0 ; i<n && src[i]!='\0' ; i++)
  {
    dest[i] = src[i];
  }
  dest[i] = '\0';

  return dest;
}

//STRLEN

size_t my_strlen(const char* str)
{
  int len;

  for(len=0 ; str[len]!='\0'; len++);

  return len;
}

//STRCMP
int my_strcmp(const char* str1, const char* str2)
{

  int i;

  for(i=0 ; str1[i]!='\0' && str2[i] != '\0' ; i++)
  {
    if(str1[i] != str2[i])
    {
        return (str1[i]-str2[i]);
    }
  }
  if(str1[i]=='\0')
  {
      return (-str2[i]);
  }
  if(str2[i]=='\0')
  {
      return (str1[i]);
  }

  return 0;

}

//STRCMPI
int my_strcmpi(const char* str1,const char* str2)
{

  int i, rtn;

  int len1 = my_strlen(str1);   //use of another string function
  int len2 = my_strlen(str2);

  char *temp1 = (char*)malloc(len1);
  char *temp2 = (char*)malloc(len2);

  for(i=0 ; str1[i]!='\0' ; i++)
  {
    temp1[i] = toupper(str1[i]);
  }
  for(i=0 ; str2[i]!='\0' ; i++)
  {
    temp2[i]=toupper(str2[i]);
  }

  for(i=0 ; temp1[i]!='\0' && temp2[i] != '\0' ; i++)
  {
    if(temp1[i] != temp2[i])
    {
        rtn = (temp1[i]-temp2[i]);
    }
  }
  if(temp1[i]=='\0')
  {
      rtn = (-temp2[i]);
  }
  if(str2[i]=='\0')
  {
      rtn = (temp1[i]);
  }

  free(temp1);
  free(temp2);

  return rtn;

}

//STRNCMP
int my_strncmp(const char* str1, const char* str2, int n)
{

  int i;

  for(i=0 ; str1[i]!='\0' && str2[i] != '\0' && i<n ; i++)
  {
    if(str1[i] != str2[i])
    {
        return (str1[i]-str2[i]);
    }
  }
  if(str1[i]=='\0')
  {
      return (-str2[i]);
  }
  if(str2[i]=='\0')
  {
      return (str1[i]);
  }

  return 0;

}

//STRCAT
char* my_strcat(char* dest, char* src)
{
  int len = my_strlen(dest);     //use of another string function
  int i;

  for(i=0 ; src[i]!='\0' ; i++)
  {
    dest[len+i] = src[i];
  }
  dest[len+i]='\0';

  return dest;

}

//STRNCAT
char* my_strncat(char* dest, char* src, int n)
{
  int len = my_strlen(dest);  //use of another string function
  int i;

  for(i=0 ; src[i]!='\0' && i<n; i++)
  {
    dest[len+i] = src[i];
  }
  dest[len+i]='\0';

  return dest;

}


//STRCHR
char* strchr(const char* str, int c)
{


}

//STRRCHR
char* strchr(const char* str, int c)
{


}


//MEMCMP

int my_memcmp(const char* str1, const char* str2, size_t n)
{
  int i;

  for(i=0;i<n;i++)
  {
    if(*str1 > *str2)
    {
      return (*str1)-(*str2);
    }
    else if(*str1 < *str2)
    {
      return (*str1)-(*str2);
    }
    str1++;
    str2++;

  }
  return 0;

}
