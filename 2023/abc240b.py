n = int(input())
a = list(map(int, input().split()))
q = {}
for i in a:
  if not i in q:
    q[i] = 1
print(len(q))