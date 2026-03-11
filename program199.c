#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the name of file that you want to create:");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

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
