
a = [0] * 10                                #10個の配列(要素の値0)を作る
a[0] , a[1] =map(int, input().split())      #1行を空白でsplitし、int型に変換して、変数2個に格納

for i in range(2,10):           #for(i=2;i<10;i++)
    s = str(a[i-2] + a[i-1])    #2個の要素を加算して文字列型に変換
    a[i] = int(s[::-1])         #s[::-1]で文字列を反転し、int型に変換
print(a[9])                     #要素a[9]を出力

#文字列のスライス構文
#s[start:stop:step]  step=-1指定で逆順になる

