a, b = map(int, input().split())
if a > b:
  b, a = a, b
s = "No"
if a==1 and b==10:
  s = "Yes"
elif a+1 == b:
  s = "Yes"
print(s)