def CountCapital(Brr): 
    Count = 0 
    for i in range(len(Brr)):
        if(Brr[i] >= 65 and Brr[i] <= 90):     # Issue
            Count = Count + 1
    
    return Count

def main():
    print("Enter string : ")
    Arr = input()

    Ret = CountCapital(Arr)
    print("Number if capital charecter are : ",Ret)

main()                                                   