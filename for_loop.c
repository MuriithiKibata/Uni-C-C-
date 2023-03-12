#include <stdio.h>
#include <string.h>

int main(void)
{
    int userNum;
    int num3 = 0;
    int subLoop1 = 0;
    int num2 = 0;
    scanf("%d", &userNum);
    
    int sum = userNum * 2;
    int half = sum / 2;
    // int no = user
//First loop that controls everything
    for (int i = 0; i < half; i++)
    {
        subLoop1 = 0;
        printf("\n");
        //second loop that prints the asterisk
        for (int j = subLoop1; j < 2; j++)
        {
            printf("*");

            num3 = 0;

            //third loop that prints the spaces
            for (int i = num3; i < num2; i++){
            
             printf(" ");
            
            } 
            
        }
        num2++;
        
    }

//First loop that controls everything
    for (int i = 0; i < half; i++){
       subLoop1 = 0;
       //this ensures that the * * are printed on a new line
        printf("\n");

           //second loop that prints the asterisk
        for (int j = subLoop1; j < 2; j++)
        {
            printf("*");

            num3 = 0;

             //third loop that prints the spaces
            for (int x = 0; x  < userNum ; x++){
               
             printf(" ");
            
            } 
            userNum--;
        }

}
    return 0;
}

//  for (int k = userNum; k < 0; k--)
//                     printf(" ");