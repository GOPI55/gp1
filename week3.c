#include <stdio.h>
#include <string.h>
#include <ctype.h>
 int main() 
{ 
    char ch[10]; 
  
    gets(ch); 
    printf("%c in uppercase is represented as  %c", 
           ch[0], toupper(ch[0])); 
  
    return 0; 
} 
