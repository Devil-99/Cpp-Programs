#Euclid's algorithm for GCD

x, y = [int(x) for x in input("Enter two value: ").split()]
if(x<y):
    (x,y)=(y,x)
while(x%y)!=0:
    (x,y)=(y,x%y)
print(y)

#recursive way
x, y = [int(x) for x in input("Enter two value: ").split()]
def gcd(m,n):
    if(m<n):
        (m,n)=(n,m)
    if(m%n)==0:
        return(n)
    else:
        return (gcd(n,m%n))
z=gcd(x,y)
print(z)