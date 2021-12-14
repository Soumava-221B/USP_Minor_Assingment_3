/*
Create a program to display the address and value of each element of the given integer array a. Also
perform a close observation on the format of the address and the change of address from index 0 to
the last index of the array.
*/
#include <stdio.h>  
#include <stdlib.h>  
  
int main()
{
    int str[10]={0,10,20,30,40,50,60,70,80,90};
    int i;
    int n= *(&str+ 1)- str;
    printf("\n\nAccept a string from keyboard :\n");
    printf("-----------------------------------\n"); 	
     for(i=0;i<n;i++)
        printf("\n  %d is in address of %p", str[i],&str[i]);

  return 0;
}