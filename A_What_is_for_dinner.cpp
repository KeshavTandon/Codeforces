#Python equivalent of the modified C++ code

tscttt = int(input())

for _ in range(tscttt):
    m = int(input())
    c = list(map(int, input().split()))

    loooo = []
    its_stack = []
    resltttttt = 0

    for tscttt in range(m):
        while len(loooo) > 1 and loooo[-1] > c[tscttt]:
            c1 = loooo.pop()
            if c1 >= loooo[-1]:
                its_stack.pop()
            else:
                loooo.append(c1)
                break
        loooo.append(c[tscttt])
        its_stack.append(tscttt)

    lttttt = loooo[-1]
    loooo.pop()
    koooo = its_stack[-1]
    its_stack.pop()

    while loooo:
        resltttttt += max(lttttt, loooo[-1]) * (koooo - its_stack[-1])
        lttttt = loooo[-1]
        loooo.pop()
        koooo = its_stack[-1]
        its_stack.pop()

    print(resltttttt)