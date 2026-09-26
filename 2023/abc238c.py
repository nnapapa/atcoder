n = int(input())
ans = 0
i = 10**18
if n<10:
  print(n*(n+1)//2)
  exit()
while i>n:
  i //= 10
i1 = n - i + 1
ans = i1*(i1+1)//2
ans %= 998244353
while i:
  i //= 10
  ans += (i*9)*(i*9+1)//2
  ans %= 998244353
print(ans)