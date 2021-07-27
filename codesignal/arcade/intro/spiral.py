def spiralNumbers(n):
    x = y = 0
    count = 0
    check = 1
    r = n
    d = n
    l = -1
    u = 0
    arr = [[0]*n for i in range(n)]
    count += 1
    arr[x][y] = count
    while count < n*n:
        if (check == 1):
            while(x < r-1):
                x += 1
                count += 1
                arr[x][y] = count
            r = r-1
            check = 2
        elif (check == 2):
            while(y < d-1):
                y += 1
                count += 1
                arr[x][y] = count
            check = 3
            d = d-1
        elif(check == 3):
            while(x > l+1):
                x -= 1
                count += 1
                arr[x][y] = count
            check = 4
            l += 1
        elif(check == 4):
            while(y > u+1):
                y = y-1
                count += 1
                arr[x][y] = count
            check = 1
            u += 1
    return arr


spiralNumbers(10)
