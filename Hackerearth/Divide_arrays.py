t=int(input())
for j in range(0,t):
 s =int(input())
 lst=[]
 for i in range(0,s):
   lst = list(map(int,input().strip().split()))[:s]
 flag = False    
 for i in range(1,s):
    f = sorted(lst[0:i])
    se = sorted(lst[i:s])
    if(f[0]==se[0]):
        print(i)
        flag=True
        break
 if(flag==False):
    print(-1)
    