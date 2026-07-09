#include<stdio.h>
#include<stdlib.h>
// #include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("PPA.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Anable to open file ");
    }
    else
    {
        printf("File gets succesfully opened with fd : %d",fd);
        write(fd,"Jay Ganesh",10);
        close(fd);
    }

    return 0;
}