T = int(input(""))
if 1 <= T <= 100:
    for i in range(1, T + 1):
        N = int(input())
        S = input()
        output = 0
        count = 0
        for x in range(len(S)):
            if int(S[x]) == 0:
                count += 1
                if count == 2:
                    output += 1
            else:
                count -= 1
                if count == -2:
                    output += 1
        print(output)
