# PIC
This is a repository to store all the code in PIC
#include<stdio.h>

int main(){
    char name;
    
    

    printf("what is ur name\n");
    scanf("%c", &name);

    if (name == 'a')
    {
        printf("hi aditpal how are u, glad to meet you\n");
    }

    else if  (name == 'b')
    {
        printf("hi sir i know you if if I am not wrong you are mr aniket gupta , right sir?\n");
    }

    else
    {
        printf("sorry i dont know you\n");

    }

    return 0;
}
