g = [1, 1, 1]
h = 0
for i in range(2, 50):
    h = g[int(i - 1)] + g[int(i)] + g[int(i - 2)]
    g.append(h)
print(h)
