#include<stdio.h>
#include<windows.h>
int main()
{
    int i;
    for(i = 0; i < 15; i++){
        printf("\xB2 ");
        printf(" \xB2");
        Sleep(200);
    }

    return 0;
}
