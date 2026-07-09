#include<stdio.h>
#include<stdlib.h>
// #include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd = 0;

    fd = creat("LB.txt",0777);

    if(fd == -1)
    {
        printf("Anable to creat file ");
    }
    else
    {
        printf("File gets succesfully crested with fd : %d",fd);
    }

    return 0;
}