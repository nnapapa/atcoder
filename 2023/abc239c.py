x1,y1,x2,y2 = map(int, input().split())
x = abs(x1-x2)
y = abs(y1-y2)
if x>y:
  y, x = x , y
ans = 'No'
if x==0 and y==4:
  ans = 'Yes'
if x==0 and y==2:
  ans = 'Yes'
if x==1 and y==1:
  ans = 'Yes'
if x==1 and y==3:
  ans = 'Yes'
if x==2 and y==4:
  ans = 'Yes'
if x==3 and y==3:
  ans = 'Yes'
print(ans)