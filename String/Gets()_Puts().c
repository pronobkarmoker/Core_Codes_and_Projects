#include<stdio.h>

int main(){

   char arr[5] ;
   printf("Enter a string: ");
   gets(arr);          // if we use scanf -> only the first word is considered.  but geets()-> full sentence
   puts(arr);

  //         scanf("%[^\n]s", arr);        // -> full sentence ............
    
   return 0; 
}