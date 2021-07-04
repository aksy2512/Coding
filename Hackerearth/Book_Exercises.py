n=int(input())

s=[]

for i in range(n):

 temp=input().split()

 temp[0]=int(temp[0])

 if temp[0]>0:

   s.append(temp)

 elif(temp[0]==-1):

  if(s):

   mini=min(reversed(s),key=lambda x:x[0])

   min_ind=list(reversed(s)).index(mini)

   book_to_pick=len(s)-1-min_ind

   s=s[:book_to_pick]

print(min_ind,mini[1])