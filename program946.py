def DisplayFactor(no):

    for i in range(1,no+1):
        if(no % i == 0):
            print(i)

    

def main():

    print("Enter the number : ")
    Value = int(input())

    DisplayFactor(Value)
    
main()