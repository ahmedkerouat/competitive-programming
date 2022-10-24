# https://www.codechef.com/problems/CUTPAPER
T = int(input(""))
if 1 <= T <= 1000:
    for i in range(1, T + 1):
        N, K = map(int, input("").split())
        if 1 <= int(K) <= int(N) <= 1000:
            a = N//K
            print(a * a)
