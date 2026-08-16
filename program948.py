def CheckPerfect(no):
    iSum = 0

    for i in range(1,int((no/2)+1)):
        if(no % i == 0):
            iSum = iSum + i

    return iSum



def main():

    print("Enter the number : ")
    Value = int(input())

    iRet = CheckPerfect(Value)
    print("Summetion of factor : ",iRet)
    
main()