# taking two input at a time

a,b=input().split()
print("first no is {} and second is {}".format(a,b))

m,n=input("Give two no").split()
print(m,n)

x = list(map(int, input("Enter a multiple value: ").split())) 
print("List of students: ", x)
print(x[0]+x[1]+x[2]+x[3])

x, y = [int(x) for x in input("Enter two value: ").split()]
print(x,y)

x, y = map(int, raw_input().split())
print(x,y)