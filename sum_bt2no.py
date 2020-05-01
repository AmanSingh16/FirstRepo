a=int(input("Enter the first number: "))
b=int(input("Enter the last number: "))
sum=0.0
for i in range(a,b+1):
    sum=sum+i
avg=sum/(b-a)
print("The sum of numbers between "+str(a)+" & "+str(b)+" is :", sum)
print("The avegrage is :",avg)
