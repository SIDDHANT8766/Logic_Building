class Arithmatic:
    # Constructor
    def __init__(self,A = 0,B = 0):  
        self.No1 = A  #Characteristics
        self.No2 = B    #Characteristics

    def Add(self):
        Ans = 0
        Ans = self.No1 + self.No2
        return Ans

    def Sub(self):
        Ans = 0
        Ans = self.No1 - self.No2
        return Ans
    

def main():
    aobj = Arithmatic()

    Ret = aobj.Add()
    print("Addition is : ",Ret)

    Ret = aobj.Sub()
    print("Substraction is : ",Ret)

main()                                                   