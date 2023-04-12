#include<stdio.h>
int main()
{
    int i;
    char a[100];
    for(i=0;a[i]!='\0';i++)
    {
        gets(a);
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='q')
        printf("a");
        else if(a[i]=='w')
        printf("b");
        else if(a[i]=='e')
        printf("c");
        else if(a[i]=='r')
        printf("d");
        else if(a[i]=='t')
        printf("e");
        else if(a[i]=='y')
        printf("f");
        else if(a[i]=='u')
        printf("g");
        else if(a[i]=='i')
        printf("h");
        else if(a[i]=='o')
        printf("i");
        else if(a[i]=='p')
        printf("j");
        else if(a[i]=='a')
        printf("k");
        else if(a[i]=='s')
        printf("l");
        else if(a[i]=='d')
        printf("m");
        else if(a[i]=='f')
        printf("n");
        else if(a[i]=='g')
        printf("o");
        else if(a[i]=='h')
        printf("p");
        else if(a[i]=='j')
        printf("q");
        else if(a[i]=='k')
        printf("r");
        else if(a[i]=='l')
        printf("s");
        else if(a[i]=='z')
        printf("t");
        else if(a[i]=='x')
        printf("u");
        else if(a[i]=='c')
        printf("v");
        else if(a[i]=='v')
        printf("w");
        else if(a[i]=='b')
        printf("x");
        else if(a[i]=='n')
        printf("y");
        else if(a[i]=='m')
        printf("z");
     return 0;
    }
}
