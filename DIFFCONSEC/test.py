T = int(input(""))
if 1 <= T <= 100:
    for i in range(1, T + 1):
        N = int(input())
        S = input()
        c = 0
        for x in range(N - 1):
            print(x)
            if S[x] == S[x+1]:
                c += 1
        print(c)
