T = int(input())
for _ in range(T):
    hash = []
    n = int(input())
    x = 2
    for i in range(2,n+2):
        hash[i]=0
    for i in range(2,n+2):
        elif hash[i]==0:
            if i%x==0:
                hash[x]=1
                hash[i]=-1
            else:
                hash[x]=-1
                hash[i]=1
            