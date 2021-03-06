# Finding GCD of 2 numbers

#1st process
x, y = [int(x) for x in input("Enter two value: ").split()]
arrx=[]
arry=[]
for i in range (1,x+1):
    if(x%i==0):
        arrx.append(i)
for j in range (1,y+1):
    if(y%j==0):
        arry.append(j)

#finding common term of two list by set method
""""""def common_member(a, b): 
    a_set = set(a) 
    b_set = set(b) 
    if (a_set & b_set):
        print(a_set & b_set) 
    else: 
        print("No common elements")  
common_member(arrx,arry)""""""

c=[]
for f in arrx:
    if f in arry:
        c.append(f)
print(c[-1])

#2nd process
x, y = [int(x) for x in input("Enter two value: ").split()]
for i in range (1,min(x,y)+1):
    if(x%i)==0 and (y%i)==0:
        k=i
print(k)

#3rd process
x, y = [int(x) for x in input("Enter two value: ").split()]
i=min(x,y)
while i>0:
    if(x%i)==0 and (y%i)==0:
        print(i)
        break
    else:
        i=i-1