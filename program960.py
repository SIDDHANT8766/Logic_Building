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

main()                                                   