def recursion(n, i=0):
    if i == n:
        return
    print(i)
    i += 1
    return recursion(n, i)


recursion(5)
