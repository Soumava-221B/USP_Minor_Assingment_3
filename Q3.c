/*
Write a program to read a string from the keyboard and print each character with their address on the screen. 
*/
#include <stdio.h>  
#include <stdlib.h>  
int main()
{
    char str[20];
    int i;
	
    printf("\n\nAccept a string from keyboard :\n");
    printf("-----------------------------------\n"); 	
    printf("Input the string : ");
    scanf("%s",str);
    printf("The string you entered is : %s\n", str);
     for(i=0;str[i]!='\0';i++)
       
       printf("\n  %c is in address of %p", str[i],&str[i]); 

  return 0;  
}