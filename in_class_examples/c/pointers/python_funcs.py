def change_int(x):
  x += 1
  return x

num = 2
print(num)
print(change_int(num))
print(num)

def change_list(L):
  L.append(20000)
  return L

test_list = [2, 3]
print(test_list)
print(change_list(test_list))
print(test_list)
