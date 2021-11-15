#########print("hello")
#########
#########a= (5 - 1) * ((7 + 1) / (3 - 1))
#########print(a)
#########
#########
#########print('I am {} years old.'.format(str(19)))
#########
#########spam = 0
#########while spam < 5:
#########    print('Hello, world.')
#########    spam = spam + 1
#########
#########
#########if n%2==0:
#########    print("Even")
#########else:
#########    print("Odd")
#########
#########fact=1    
#########n=int(input())
#########for i in range(1,n+1):
#########    fact=fact*i
#########print(fact)
#########
########
########n = int(input())
########m = int(input())
########o = int(input())
########
########if n>m and n>o:
########    print(n)
########elif m>n and m>o:
########    print(m)
########else:
########    print(o)
#######
#######Pattern 4
######
######for i in range(65,70):
######    for j in range(1,6):
######        print(chr(i), end=" ")
######    print()
######
######for i in range(65,70):
######    for j in range(1,6):
######        print(chr(j), end=" ")
######    print()
######
######print("--------------")
######for i in range(6,1,-1):
######    for j in range(70,65,-1):
######        print(chr(j), end=" ")
######    print()
######
######print("--------------")
######for i in range(1,6):
######    for j in range(1,i+1):
######        print(i, end=" ")
######    print()
######
######
######print("--------------")
######for i in range(1,6):
######    for j in range(1,i+1):
######        print(j, end=" ")
######    print()
######
######print("--------------")
######for i in range(1,6):
######    for j in range(6,i,-1):
######        print(i, end=" ")
######    print()
######
#####
#####
#####import datetime
#####now = datetime.datetime.now()
#####print ("Current date and time : ")
#####print (now.strftime("%Y-%m-%d %H:%M:%S"))
#####
####
####
####a = int(input("enter a:"))
####
####b = int(input("enter b:"))
####
####a = a+b;
####b= a-b;
####a= a-b;
####print("a is ",a,"b is ", b)
####
####
####
###number = int(input("enter no: "))
###if number>1:
###    for i in range(2,number):
###        if (number%i)==0:
###            print(number, "is not a prime number")
###            break
###    19else:
###            print(number, "is a prime number")
###else:
###        print(number, "is not a prime no")
##
### Learned something new today and slowly slowly going to understand more :)
##
##import random
##print("This is a simple dice game which randomly prints the numbers")
##number = "y"
##
##while number == "y":
##    n = random.randint(1,6)
##    if n==1:
##        print("1")
##    if n==2:
##        print("2")
##    if n==3:
##        print("3")
##    if n==4:
##        print("4")
##    if n==5:
##        print("5")
##    if n==6:
##        print("6")
##    number = input("Press y to continue, press any other key to exit: ")
#
#print(dir("string"))
#
#print(dir("list"))
#
#print(dir("tuple"))
#
#print(dir("dict"))
#

#Input:
#7 3
#1
#51
#966369
#7
#9
#999996
#11
#
#Output:
#4

(n, k) = map(int, input().split(' '))

ans = 0

for i in range(n):
	x = int(input())
	if x % k == 0:
		ans += 1

print(ans)	

print(40%15)

n=int(input())
lst=[]
for i in range(0,n):
    c=int(input())
    lst.append(c)
print("********")
lst.sort()
for i in lst:
    print(i)
