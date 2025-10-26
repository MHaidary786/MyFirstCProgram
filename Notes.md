```C
#include <stndio.h> 
```

## Compilers:
*  GCC / CC
   Gcc and cc are the Compilers for C language, they compile the human readable code into binary computer readable code and link them to executable file.

   `gcc hello.c` or `cc hello.c`
   this will output a file called `a.out` in Linux and `a.exe` in windows.
   `./a.out` will run the compiled program.
*
!!! *Line Endings `/r/n`*


with `&` we can address a specific memory address:
```C
scanf("%f", &variable_name);
```
with `%` we can make a placeholder in formatting:
```C
printf("The Temp is %f.\n", temp_C);
```

*f = float*
*s = string*
*d = integer*
*u = unsigned int   =>   only positive numbers*

This is how you make a string variable in C:
```C
char name[] = "John Doe";
```
In C there is no string type, for to have a string variable, C knows it as an array / a sequence or characters.
*null terminator = \0*

![[Pasted image 20251026134424.png]]

to copy a string from a variable to another should be done with following way:
```C
char source[] = "Name";
char dest[];

strcpy(dest, source); // Now the dest = "Name"
```

and for concatenating several strings:

```C
char source[] = "Last";
char dest[] = "Name";
strcat(dest, source); // dest = dest + source
```

Safe _s string functions
```C
#include <string.h>
strcpy_s(msg, sizeof(msg), "name");
```

![[Pasted image 20251026145707.png]]

