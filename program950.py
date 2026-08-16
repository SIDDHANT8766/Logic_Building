def AddDigit(No):

    while(No != 0):
        iDigit = No % 10
        print(iDigit)
        No = No / 10      # ISUUe

def main():
    print("Enter the number : ")
    Value = int(input())

    AddDigit(Value)
    
main()