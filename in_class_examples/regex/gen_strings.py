max_len = 5
chars = ['a', 'b']

for size in range(1, max_len + 1):
  for num in range(2**size):
    s = ''
    for j in range(size):
      s += chars[(num & (1 << j)) >> j]
    print(s)

