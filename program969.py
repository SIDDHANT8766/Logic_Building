def CountSmall(Brr): 
    Count = 0 
    for i in range(len(Brr)):
        if(Brr[i] >= 'a' and Brr[i] <= 'z'):
            Count = Count + 1
    
    return Count

def main():
    print("Enter string : ")
    Arr = input()

    Ret = CountSmall(Arr)
    print("Number if CountSmall charecter are : ",Ret)

main()                                                   