t = int(input())


while(t > 0):
    t -= 1

    s = input()
    s = s.split(" ")
    x1 = int(s[0])
    y1 = int(s[1])
    x2 = int(s[2])
    y2 = int(s[3])

    ver = x2 - x1
    hor = y2 - y1

    ans = 1

    for i in range(max(ver, hor)+1, ver+hor+1):

        ans *= i

    for i in range(1, min(ver, hor)+1):
        ans //= i
    print(ans)
