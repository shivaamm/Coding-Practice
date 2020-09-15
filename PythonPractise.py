####print("hello")
####
####a= (5 - 1) * ((7 + 1) / (3 - 1))
####print(a)
####
####
####print('I am {} years old.'.format(str(19)))
####
####spam = 0
####while spam < 5:
####    print('Hello, world.')
####    spam = spam + 1
####
####
####if n%2==0:
####    print("Even")
####else:
####    print("Odd")
####
####fact=1    
####n=int(input())
####for i in range(1,n+1):
####    fact=fact*i
####print(fact)
####
###
###n = int(input())
###m = int(input())
###o = int(input())
###
###if n>m and n>o:
###    print(n)
###elif m>n and m>o:
###    print(m)
###else:
###    print(o)
##
##Pattern 4
#
#for i in range(65,70):
#    for j in range(1,6):
#        print(chr(i), end=" ")
#    print()
#
#for i in range(65,70):
#    for j in range(1,6):
#        print(chr(j), end=" ")
#    print()
#
#print("--------------")
#for i in range(6,1,-1):
#    for j in range(70,65,-1):
#        print(chr(j), end=" ")
#    print()
#
#print("--------------")
#for i in range(1,6):
#    for j in range(1,i+1):
#        print(i, end=" ")
#    print()
#
#
#print("--------------")
#for i in range(1,6):
#    for j in range(1,i+1):
#        print(j, end=" ")
#    print()
#
#print("--------------")
#for i in range(1,6):
#    for j in range(6,i,-1):
#        print(i, end=" ")
#    print()
#


import datetime
now = datetime.datetime.now()
print ("Current date and time : ")
print (now.strftime("%Y-%m-%d %H:%M:%S"))













