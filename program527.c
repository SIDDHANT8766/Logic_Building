#include<stdio.h>
#include<stdlib.h>
// #include<unistd.h>
#include<fcntl.h>

int main()
{
    int fdSrc = 0 , fdDest = 0;
    char fSource[100] = {'\0'};
    char fDest[100] = {'\0'};
    char Buffer[100] = {'\0'};
    int iRet = 0;
    
    printf("Enter the name of source file :\n");
    scanf("%s",&fSource);

    printf("Enter the name of Destination file :\n");
    scanf(" %s",&fDest);


    fdSrc = open(fSource,O_RDONLY);

    if(fdSrc == -1)
    {
        printf("Aneble to open source file\n");
        return -1;
    }
    

    fdDest = creat(fDest,0777);

    if(fdDest == -1)
    {
        printf("Anable to create Destination file\n");
        close(fdSrc);
        return -1;
    }

    while((iRet = read(fdSrc,Buffer,sizeof(Buffer))))
    {
        write(fdDest,Buffer,iRet);
    }

    close(fdSrc);
    close(fdSrc);

    printf("File copy succesfully\n");

    return 0;
}