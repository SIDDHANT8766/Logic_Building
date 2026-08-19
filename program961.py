def Summetion(Brr):
    Sum = 0

    for i in range(len(Brr)):
        Sum = Sum + Brr[i]
        
    return Sum

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

    Result = Summetion(Arr)
    print("Summetion of all elements are : ",Result)

main()                                                   