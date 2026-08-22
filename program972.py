def CountCapital(Brr): 
    Count = 0 
    for ch in Brr:
        if(ord(ch) >= 65 and ord(ch) <= 90):     #  Issue resolved
            Count = Count + 1
    
    return Count

def main():
    print("Enter string : ")
    Arr = input()

    Ret = CountCapital(Arr)
    print("Number if capital charecter are : ",Ret)

main()                                                   