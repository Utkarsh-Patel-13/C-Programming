Introduction :
	In  this  project  I have implement  some  of  the  string.h library  functions  and  benchmark  them  against  standard  C library  string.h  functions.


Implementation :
	Following  functions  are defined in  a  file  called  my_string.h with  same  signature  as  string.h  library.  (exactly  same  returntype  and  inputs).

1.  strcpy()
2.  strncpy()
3.  strlen()
4.  strcmp()
5.  strcmpi()
6.  strncmp()
7.  strcat()
8.  strncat()
9.  strchr()
10. memcmp()


Testing :
	Functions implemented in my_string.h are benchmarked against respective library functions. In this process, a file of particular size containing random characters is used.
The string functions then are tested on it.(More details in Test.txt).


Details about files included in this repository :

1. my_string.h :
	File containing string functions defined by me.
	The names of functions are given by adding prefix "my_" to the name of equivalent library function.
For example : my_strcpy() is equivalent to library function strcpy().


2. main.c : 
	C file that reads data from the file "char_file.txt" and tests functions of my_string.h and string.h.


3. char_file.txt :
	Text file that containing random characters(more than 13000 characters in this case).

4. Test.txt : 
	File containing details about test times of functions(tested on the file "char_file.txt") from my_string.h and string.h.
