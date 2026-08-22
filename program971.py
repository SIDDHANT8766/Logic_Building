def CountCapital(Brr): 
    Count = 0 
    for ch in Brr:
        if(Brr[ch] >= 65 and Brr[ch] <= 90):     # Issue
            Count = Count + 1
    
    return Count

def main():
    print("Enter string : ")
    Arr = input()

    Ret = CountCapital(Arr)
    print("Number if capital charecter are : ",Ret)

main()                                                   