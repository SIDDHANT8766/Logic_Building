def CheckPerfect(no):
    iSum = 0

    for i in range(1,int((no/2)+1)):
        if(no % i == 0):
            iSum = iSum + i

    if(no == iSum):
        return True
    else:
        return False



def main():

    print("Enter the number : ")
    Value = int(input())

    Result = CheckPerfect(Value)

    if(Result == True):
        print("Number is Perfect")
    else:
        print("Number is not even")

    
main()