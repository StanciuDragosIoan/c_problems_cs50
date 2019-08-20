#include <cs50.h>
#include <stdio.h>
 

int main(void)
{
 
    
int height = get_int("Height: \n");
   
while(height<=0 || height >8){
   // n = get_int("Please type a number between 1 and 8 =)! \n");
   height = get_int("Height: \n");
}  
   printf("Height: %i\n", height);
      
    int i;
    int number_of_spaces;
    int width = height;
    int number_of_bricks;
    char space = '.';
    char brick = '#';
    for(i=0; i<height; i++){   
         number_of_bricks = i+1; //at least 1 brick per line
         number_of_spaces = width - number_of_bricks;
         for(int q=0; q<number_of_spaces; q++){
             printf("%c", space);
         }  
        for(int k=0; k<number_of_bricks; k++){
           printf("%c", brick); 
        }
         printf("\n");
    
    }

 
}
