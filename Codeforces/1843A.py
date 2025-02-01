for tst in range(int(input())):
    n=int(input())
    a=sorted(list(map(int, input().split())))
    ans=0
    for i in range(n//2):
        ans+=a[n-i-1]-a[i]
    print(ans)
