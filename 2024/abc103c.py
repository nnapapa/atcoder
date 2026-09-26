n = int(input())
a = list(map(int, input().split()))
m = max(a)
ans = 0
for i in range(m*2-1):
  f = 0
  for j in range(n):
    f += i % a[j]
  ans = max(ans, f)
print(ans)