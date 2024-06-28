def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        res = 0
        cnt = {}
        tot = 0
        for i in range(n):
            cnt[a[i]] = cnt.get(a[i], 0) + 1
            tot += a[i]
            if tot % 2 == 0 and cnt.get(tot // 2, 0) > 0:
                res += 1
        print(res)

if name == "main":
    main()