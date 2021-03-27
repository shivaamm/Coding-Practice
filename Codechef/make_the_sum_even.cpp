import math
t =int(input())
for _ in range(t):
    c=0
    n=int(input())
    l=list(map(int,input().split()))
    if(sum(l)%2==0):
        print(0)
    else:
        for i in range(n):
            if(l[i]==2):
                c=c+1
                break
        if(c!=0):
            print("1")
        else:
            print("-1")
