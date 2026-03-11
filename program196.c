#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("PPA.txt",0777);

    if(fd == -1)
    {
        printf("Anable to create file");
    }
    else
    {
        printf("File succesfully ctreated");
    }

    return 0;
}
