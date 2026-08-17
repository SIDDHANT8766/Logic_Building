def SumDigit(No):
    iDigit = 0
    iSum = 0

    while(No != 0):
        iDigit = No % 10
        iSum = iSum + iDigit
        No = No // 10

    return iSum

def main():
    print("Enter the number : ")
    Value = int(input())

    Result = SumDigit(Value)
    print("Addition of digit of number is : ",Result)

main()                                                   