ans = ""
n, k = input().split()
size = len(n)

if size < int(k):
    ans += "1"
    if int(k) < 3:
        for i in range(int(k) - 1):
            ans += str(i)
    else:
        ans += "0"
        for i in range(2, int(k)):
            ans += str(i)

elif size == int(k):
    ans = n

else: #size > k
    ans = n

print(ans)
