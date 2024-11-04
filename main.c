/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

     struct Post{
         int comments;
         int likes;
     };
   
int main()
{
    struct Post insta[5];
    insta[0].comments=10;
    insta[0].likes=20;
    insta[1].comments=1;
    insta[1].likes=25;
    insta[2].comments=1;
    insta[2].likes=25;
    insta[3].comments=10;
    insta[3].likes=20;
    insta[4].comments=25;
    insta[4].likes=40;
    
    for(int i=0; i<5;i++){
        printf(" sua foto teve %d comentários.\n", insta[i].comments);
        printf("sua foto teve %d curtidas.\n", insta[i].likes);
        printf("==============================\n", insta[i].likes);
    }

    return 0;
}