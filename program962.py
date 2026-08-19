def Maximum(Brr):
    iMax = Brr[0]

    for i in range(len(Brr)):
        if(Brr[i] > iMax):
            iMax = Brr[i]
        
    return iMax

def main():
    Size = 0
    Arr = []

    print("Enter number of element : ")
    Size = int(input())

    print("Enter the elements : ")

    value = 0

    for i in range(Size):
        value = int(input())
        Arr.append(value)
    
    print(Arr)

    Result = Maximum(Arr)
    print("Maximum in of all elements are : ",Result)

main()                                                   