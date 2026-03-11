#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("PPA.txt",0777);

    if(fd == -1)
    {
        printf("Anable tocreate file");
    }
    else
    {
        printf("File succesfully ctreated with fd: %d\n",fd);
    }

    return 0;
}
