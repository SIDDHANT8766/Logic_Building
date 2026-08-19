def Minimum(Brr):
    iMin = Brr[0]

    for i in range(len(Brr)):
        if(Brr[i] < iMin):
            iMin = Brr[i]
        
    return iMin

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

    Result = Minimum(Arr)
    print("Minimum in of all elements are : ",Result)

main()                                                   