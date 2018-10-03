#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


// STRCPY
/*
  definition : char* strcpy(char *dest, const char* src);
  Copies src(source) string to the dest(destination) string.
  Here src string is declared as a const so it doesn't get changed mistakenly.
*/
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
/*
  declaration : char* strncpy(char *dest, const char* src);
  Copies src(source) string to the dest(destination) string upto first 'n' characters.
*/
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
/*
  declaration : size_t strlen(const char*)
  counts number of characters in str(excluding the '\0' and returns an integer value
  (size_t -> tells compiler that function will return size of something.)
*/
size_t my_strlen(const char* str)
{
  int len;

  for(len=0 ; str[len]!='\0'; len++);

  return len;
}

//STRCMP
/*
  declaration : int strcmp(const char* str1, const char* str2);
  Compares each corresponding characters in str1 and str2.
  If the strings are same, the function returns 0,
  else it returns the difference of first non-similar characters by subtracting their ASCII values.
  strcmp() is a case secsitive function, i.e "STRING" and "sting" are not similar
*/
int my_strcmp(const char* str1, const char* str2)
{

  int i;

  for(i=0 ; str1[i]!='\0' && str2[i] != '\0' ; i++)                  // Loop for checking if the corresponding characters are similar or not.
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
/*
  declaration : int strcmpi(const char* str1, const char* str2);
  Similar to strcmp(), but this function is not case sensitive.
  Inside function, both the strings will be compared in uppercase.
*/
int my_strcmpi(const char* str1,const char* str2)
{

  int i, rtn;

  int len1 = my_strlen(str1);   //use of another string function
  int len2 = my_strlen(str2);

  char *temp1 = (char*)malloc(len1);      //temp1 stores str1 in uppercase
  char *temp2 = (char*)malloc(len2);      //temp2 stores str2 in uppercase

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
/*
    declaration : int strncmp(const char* str1, const char* str2, int n)
    This function is similar to strcpy(), but it only compares the strings upto first 'n' characters.
*/
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
/*
  declaration : char* strcat(char* dest, char* src)
  This function concatenates src(source) to dest(destination).
*/
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
/*
  declaration : char* strncat(char* dest, char* src)
  This function concatenates first 'n' characters of src(source) to dest(destination).
*/
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
/*
  declaration : char* strchr(const char* str, int ch)
  This function checks for first occurrence of character 'ch' in the string str and returns the pointer to that character.
*/
char* my_strchr(const char* str, int ch)
{
  char *itr = (char *)str;
  while(*itr != '\0')
  {
     if (*itr == ch)
     {
             return itr;
     }
     itr++;
  }
  return NULL;
}

//MEMCMP
/*
  declaration : int memcmp(const char* str1, const char* str2, size_t n)
  This function compares first 'n' memory area of str1 and str2 and returns difference in ASCII value of first non-similar character.
*/
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
