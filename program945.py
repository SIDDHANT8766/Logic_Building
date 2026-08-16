def CheckEven(no):
    bRet = None
    if(no % 2 == 0):
        bRet = True
    else:
        bRet = False
        
    return bRet

def main():

    print("Enter the number : ")
    Value = int(input())

    Result = CheckEven(Value)

    if(Result == True):
        print("Number is Even")
    else:
        print("Number is Not Even")
    
main()