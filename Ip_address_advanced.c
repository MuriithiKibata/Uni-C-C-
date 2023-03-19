#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int dot;
    int pos1 = 0;
    int pos2 = 4;
    int pos3 = 8; 
    int pos4 = 12; 
    int len = 4;
    int len2 = 3;
    char ip[100];
    scanf("%s", ip);
    // printf("%s", ip);
    char ip1[4];
    char ip2[4];
    char ip3[4];
    char ip4[4];
   
//   int x = atoi(str);
    int i1 = atoi(ip1);
    int i2 = atoi(ip2);
    int i3 = atoi(ip3);
    int i4 = atoi(ip4);
    int ip_len = strlen(ip);
    int ip1_len = strlen(ip1);
    int ip2_len = strlen(ip2);
    int ip3_len = strlen(ip3);
    int loop_controller = 0;

    printf("%s\n", ip);


    for (int i = 0; i < 5; i++){
        printf("%d\n", i);
        ip1[i] = ip[i];
        loop_controller ++;
        if(ip[i] == '.')
        break;
       
    }
    printf("%d\n", loop_controller);

    // printf("%s\n %d", ip1, loop_controller);
    for (int i = loop_controller; i < 8; i++){
        ip2[i] = ip[i];
        loop_controller++;
        if(ip[i] == '.')
        break;
    }

        

   
 
   
     for (int i = loop_controller -1; i < 12; i++){
        ip3[i] = ip[i];
        loop_controller++;
        if(ip[i] == '.')
        // printf("%d\n", loop_controller);
        break;
    }

     printf("%s", ip1);
    // //   printf("%d\n", loop_controller);
    //  for (int i = loop_controller - 1; i < loop_controller + 3; i++){
    //     ip4[i] = ip[i];
   
        
    // }
    //   printf("%d\n", loop_controller);
    // printf("%d", loop_controller);
    // printf("Last 3 parts: %s%s\n", ip1, ip2);
    // printf("Last 2 parts: %s%s\n", ip3, ip4);
    // printf("Last 1 part: %s\n", ip4);
    
        //     if(strchr(ip1, '.') != NULL && strchr(ip2, '.') != NULL && strchr(ip3, '.') != NULL){
        //         for(int i = 0; i < strlen(ip1); i++) {
        //             if(ip1[ip1_len - 2] == '.' && ip2[ip2_len -2] == '.' && ip3[ip3_len - 2] == '.'){
        //                 printf("Found");
        //                 break;
        //             }else{
        //                 printf("Not Found");
        //                 break;
                    
                    
        //     if(i1 < 1000 && i2 < 1000 && i3 < 1000 && i4 < 1000) {
        //     printf("Last 3 parts: %s%s%s\n", ip2, ip3, ip4);
        //     printf("Last 2 parts: %s%s\n", ip3, ip4);
        //     printf("Last 1 part: %s\n", ip4);
        //     }
        // else{
        //     printf("Error: not a valid address.");

        // }
        //         }

	return 0;
}