n, x = map(int, input().split())
a = [0]*n
b = [0]*n
for i in range(n):
  a[i], b[i] = map(int, input().split())
dp = [ [0]*10001 for _ in range(n+1)]
dp[0][0] = 1
for i in range(n):
  for j in range(10001):
    if dp[i][j]:
      dp[i+1][j+a[i]] = 1
      dp[i+1][j+b[i]] = 1
if dp[n][x]:
  print("Yes")
else:
  print("No")