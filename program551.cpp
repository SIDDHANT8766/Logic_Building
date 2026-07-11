/////////////////////////////////////////////////////////////////////////////////
// 
//   Header File Inclusion
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
// #include<unistd.h>
#include<stdbool.h>
#include<string.h>


//////////////////////////////////////////////////////////////////////////////////
// 
//   User Defined Macros
//
//////////////////////////////////////////////////////////////////////////////////

// Maximum file size that we allow in project
#define MAXFILESIZE 50

#define MAXOPENFILES 20 

#define MAXINODE 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

//////////////////////////////////////////////////////////////////////////////////
// 
//   User Defined Macros for error handling
//
//////////////////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8


//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//   User Defined Structures
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////
// 
//   Structure Name : BootBlock
//   Description :    Holds the information to boot the OS
//
//////////////////////////////////////////////////////////////////////////////////


struct BootBlock
{
    char Information[100];
};

/////////////////////////////////////////////////////////////////////////////////
// 
//   Structure Name : SuperBlock
//   Description :    Holds the information about the file system
//
//////////////////////////////////////////////////////////////////////////////////

struct SuperBlock     // Contais Data of all DB ans DILB
{
    int TotalInodes;    
    int FreeInodes;    
};

/////////////////////////////////////////////////////////////////////////////////
// 
//   Structure Name : Inode
//   Description :    Holds the information about the file
//
//////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{   
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    char *Buffer;         // actual data (written) we take pointer to actual data (DB)
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

/////////////////////////////////////////////////////////////////////////////////
// 
//   Structure Name : FileTable
//   Description :    Holds the information about the opened file
//
//////////////////////////////////////////////////////////////////////////////////

struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;   // points to Inode of IIT
};

typedef FileTable FILETABLE;
typedef FileTable* PFILETABLE;


/////////////////////////////////////////////////////////////////////////////////
// 
//   Structure Name : UAREA
//   Description :    Holds the information about the process
//
//////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];  // MAXOPENFILES  (how much file can open in ufdt)  
};

/////////////////////////////////////////////////////////////////////////////////
// 
//   Global variables or objects used in project
//
//////////////////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
UAREA uareaobj;

PINODE head = NULL;       // like (SinglyLL) // points to the head of Inode


/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : InitializedUAREA
//   Description :  It is used to initialise UAREA members
//   Author :       Siddhant Vivek Gadkari  
//   Date :         13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void InitialisedUAREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");

    int i = 0;

    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initialised successfully\n");
}

/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : InitializedSuperBlock
//   Description :  It is used to initialise Super Block members
//   Author :       Siddhant Vivek Gadkari 
//   Date :         13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void InitializedSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super block gets initialised successfully\n");
}

/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : CreateDILB
//   Description :  It is used to create Linkedlist of inode
//   Author :       Siddhant Vivek Gadkari 
//   Date :         13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;
    
    for(i = 1; i <= MAXOPENFILES; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        strcpy(newn -> FileName,"\0");
        newn -> InodeNumber = i;
        newn -> FileSize = 0;
        newn -> ActualFileSize = 0;
        newn -> FileType = 0;
        newn -> ReferenceCount = 0;
        newn -> Permission = 0;
        newn -> Buffer = NULL;
        newn -> next = NULL;

        if(temp == NULL)      // LL is empty
        {
            head = newn;
            temp = head;
        }
        else         // LL contains at least 1 node
        {
            temp -> next = newn;
            temp = temp -> next;
        }
    }

    printf("Marvellous CVFS : DILB created successfully\n");
    
}

/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : StartAuxillaryDataInitialisation
//   Description :  It is used to call all such fuction which are 
//                    used to initialize auxillary data
//   Author :       Siddhant Vivek Gadkari 
//   Date :         13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is Done\n");

    printf("%s",bootobj.Information);

    InitializedSuperBlock();

    CreateDILB();

    InitialisedUAREA();

    printf("Maevellous CVFS : Auxillary data initialised successfully\n");
}

/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : DisplayHelp
//   Description :  It is used display the help page
//   Author :       Siddhant Vivek Gadkari 
//   Date :         14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("----------------------------------------------------------------\n");
    printf("------------------- Marvellous CVFS help page ------------------\n");
    printf("----------------------------------------------------------------\n");

    printf("man    : It is use to display manual page\n");
    printf("exit   : It is used to terminate Marvellous CVFS\n");
    printf("clear  : It is used to clear the terminal\n");
    printf("creat  : It is used to create new file\n");
    printf("write  : It is used to write the data into the file\n");
    printf("read   : It is used to read the data from the file\n");
    printf("stat   : It is used to display statistical information\n");
    printf("unlink : It is used to terminate marvellous CVFS\n");

    printf("------------------------------------------------------------------\n");
}

/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : ManPageDisplay
//   Description :  It is used display man page
//   Author :       Siddhant Vivek Gadkari 
//   Date :         14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

void ManPageDisplay(char Name[])
{
    if(strcmp("ls",Name) == 0)
    {
        printf("About : It is used to list the name of all the files\n");
        printf("Usage : ls\n");
    }
    else if(strcmp("man",Name) == 0)
    {
        printf("About : It is used to display manual page\n");
        printf("Usage : man command_name\n");
        printf("command_name : It is the name of command\n");
    }
    else if(strcmp("exit",Name) == 0)
    {
        printf("About : It is used to terminate the shell\n");
        printf("Usage : exit\n");  
    }
    else if(strcmp("clear",Name) == 0)
    {
        printf("About : It is used to clear the shell\n");
        printf("Usage : clear\n");  
    }
    else
    {
        printf("No manual entry for %s",Name);
    }
}


/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : IsFileExist
//   Description :  It is used check whether the file is already exit or not
//   Input :        It accepts the file name
//   Output :       It returns the true or false
//   Author :       Siddhant Vivek Gadkari 
//   Date :         16/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

bool IsFileExist(
                    char *name        // File name
                )
{
    PINODE temp = head;
    bool bFlag = false;

    while(temp != NULL)
    {
        if((strcmp(name,temp -> FileName) == 0) && (temp -> FileType == REGULARFILE))
        {
            bFlag = true;
            break;
        }
        temp = temp -> next;
    }

    return bFlag;
}


/////////////////////////////////////////////////////////////////////////////////
// 
//   Fuction Name : CreateFile
//   Description :  It is used create new regular file
//   Input :        It accepts the file name and permission
//   Output :       It returns the file descriptor
//   Author :       Siddhant Vivek Gadkari 
//   Date :         16/01/2026
//
//////////////////////////////////////////////////////////////////////////////////

int CreateFile(
                    char *name,       // Name of new file
                    int permission    // Permission for that file
                )
{
    PINODE temp = head;
    int i = 0;

    printf("Total number of Inodes remaining : %d\n",superobj.FreeInodes);

    // if name is missing 
    if(name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    // If permission value is Wrong
    // permission -> 1 -> READ
    // permission -> 2 -> WRITE
    // permission -> 3 -> READ + WRITE
    if(permission < 1 || permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    // if the Inodes are full
    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }

    // If file is already present
    if(IsFileExist(name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    // Search empty Inode
    while(temp != NULL)
    {
        if(temp -> FileType == 0)
        {
            break;
        }
        temp = temp -> next;
    }

    if(temp == NULL)
    {
        printf("There is no Inode\n");
        return ERR_NO_INODES;
    }

    // Search for empty UFDT entry
    // Note : 0,1,2 are reserved 
    for(i = 3; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    // UFDT is full
    if(i == MAXFILESIZE)
    {
        return ERR_MAX_FILES_OPEN;
    }

    //Allocate memory for file table
    uareaobj.UFDT[i] = (PFILETABLE) malloc (sizeof(PFILETABLE));

    //Initalise file table
    uareaobj.UFDT[i] -> ReadOffset = 0;
    uareaobj.UFDT[i] -> WriteOffset = 0;
    uareaobj.UFDT[i] -> Mode = permission;

    // Connect File table with Inode
    uareaobj.UFDT[i] -> ptrinode = temp;

    // Initialised elements of Inode
    strcpy(uareaobj.UFDT[i] -> ptrinode -> FileName,name);  
    uareaobj.UFDT[i] -> ptrinode -> FileSize = MAXFILESIZE;
    uareaobj.UFDT[i] -> ptrinode -> ActualFileSize = 0;
    uareaobj.UFDT[i] -> ptrinode -> FileType = REGULARFILE;
    uareaobj.UFDT[i] -> ptrinode -> ReferenceCount = 0;
    uareaobj.UFDT[i] -> ptrinode -> Permission = permission;

    // Allocate memory for files data
    uareaobj.UFDT[i] -> ptrinode -> Buffer = (char*) malloc (MAXFILESIZE);

    // FreeInodes from super block
    superobj.FreeInodes --;

    return i;  // File Descriptor
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//   Entry Point Function of the project
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};
    int iCount = 0;
    int iRet = 0;

    StartAuxillaryDataInitialisation();

    printf("----------------------------------------------------------------\n");
    printf("------------- Marvellous CVFS started successfully -------------\n");
    printf("----------------------------------------------------------------\n");

    // Infinite Listning Shell
    while(1)
    {
        fflush(stdin);     // (eg) flush in real life

        strcpy(str,"");

        printf("\nMarvellous CVFS : > ");
        fgets(str,sizeof(str),stdin);          // scanf("%s",str);

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);
        

        fflush(stdin);   // (eg) flush in real life

        if(iCount == 1)
        {
            // Marvellous CVFS : > exit
            if(strcmp("exit",Command[0]) == 0)
            {
                printf("Thank you for using Marvellous CVFS\n");
                printf("Deallocating all the allocated resources\n");

                break;
            }
            // Marvellous CVFS : > ls
            else if(strcmp("ls",Command[0]) == 0)
            {
                printf("Inside ls\n");
            }
            // Marvellous CVFS : > help
            else if(strcmp("help",Command[0]) == 0)
            {
                DisplayHelp();
            }
            // Marvellous CVFS : > clear
            else if(strcmp("clear",Command[0]) == 0)
            {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
            }

        }// End of else if 1
        else if(iCount == 2)  
        {
            // Marvellous CVFS : > man ls
            if(strcmp("man",Command[0]) == 0)
            {
                ManPageDisplay(Command[1]);
            }

        } // End of else if 2
        else if(iCount == 3)  
        {
            // Marvellous CVFS : > creat Ganesh.txt 3
            if(strcmp("creat",Command[0]) == 0)
            {
                iRet = CreateFile(Command[1],atoi(Command[2]));    // (atoi) is ASCII to Integer  

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Unable to create the file as parameters are invalide\n");
                    printf("Please refer man page\n");
                }

                if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create file as there is no inode\n");
                }

                if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Unable to create file because file ie already exist\n");
                }

                if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : Unable to create file\n");
                    printf("Max opened files limit reached\n");
                }

                printf("File gets successfully created with FD %d\n",iRet);

            }  

        }// End of else if 3
        else if(iCount == 4)  
        {

        }// End of else if 4
        else
        {
            printf("Command Not Fount\n");
            printf("Please refer help option to get more information\n");

        } // End of else

    } // Ende of while

    return 0;
} // End of main