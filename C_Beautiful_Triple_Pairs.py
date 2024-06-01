from collections import defaultdict

def II():
    return int(input())

def read(v):
    return list(map(int, input().split()))

def main():
    T = II()  # number of test cases

    while T > 0:
        T -= 1
        n = II()
        v = read([0]*n)

        ab = defaultdict(int)
        bc = defaultdict(int)
        ac = defaultdict(int)
        ab3 = defaultdict(int)
        bc3 = defaultdict(int)
        ac3 = defaultdict(int)
        ans = 0

        for i in range(n - 2):
            a = v[i]
            b = v[i + 1]
            c = v[i + 2]
            
            ab[(a, b)] += 1
            bc[(b, c)] += 1
            ac[(a, c)] += 1
            
            triple = [a, b, c]
            ab3[tuple(triple)] += 1
            bc3[tuple(triple)] += 1
            ac3[tuple(triple)] += 1
            
            ans += ab[(a, b)] - ab3[tuple(triple)]
            ans += bc[(b, c)] - bc3[tuple(triple)]
            ans += ac[(a, c)] - ac3[tuple(triple)]

        print(ans)

if name == "main":
    main()