while 1:
    print("Choice 1 for checking prime\Choice 2 for checking armstrong\Choice 3 for finding maximum\choice 4 for exit")
    
    switcher={
        1:
            n=int(input())
            i=2
            for i in range(n-1):
                if(n%i!=0):
                    print("The number is a prime")
                else:
                    print("The number is not a prime")
        2:
            n=int(input())
            num=n
            sum=0
            while n>0:
                r=n%10
                sum=sum+(r*r*r)
                n=n/10
            if(num==sum):
                print("The number is armstrong")
            else:
                print("The number is not armstrong")
        4:
            exit()
            
              }  