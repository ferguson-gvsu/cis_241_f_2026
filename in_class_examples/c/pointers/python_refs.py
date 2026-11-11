def print_id_when_passed(x):
  print(f'Value {x} was passed with id: {id(x)}')


print('------ Integers ------')
num_a = 5
num_b = num_a
print(f'num_a has values of {num_a} and id of {id(num_a)}')
print(f'num_b has values of {num_b} and id of {id(num_b)}')
print('Passing a to function...')
print_id_when_passed(num_a)
print('Passing b to function...')
print_id_when_passed(num_b)
print('Changing the value of num_b...')
num_b = 3
print(f'num_a has values of {num_a} and id of {id(num_a)}')
print(f'num_b has values of {num_b} and id of {id(num_b)}')
print('Passing a to function...')
print_id_when_passed(num_a)

#print('------ Strings ------')
#str_a = 'hello'
#str_b = str_a
#print(f'str_a has values of {str_a} and id of {id(str_a)}')
#print(f'str_b has values of {str_b} and id of {id(str_b)}')
#print('Passing a to function...')
#print_id_when_passed(str_a)
#print('Passing b to function...')
#print_id_when_passed(str_b)
#print('Changing the value of str_b...')
#str_b = 'world'
#print(f'str_a has values of {str_a} and id of {id(str_a)}')
#print(f'str_b has values of {str_b} and id of {id(str_b)}')
#print('Passing a to function...')
#print_id_when_passed(str_a)

#print('------ Lists ------')
#list_a = [1, 2, 'red', 'blue']
#list_b = list_a
#print(f'list_a has values of {list_a} and id of {id(list_a)}')
#print(f'list_b has values of {list_b} and id of {id(list_b)}')
#print('Passing a to function...')
#print_id_when_passed(list_a)
#print('Passing b to function...')
#print_id_when_passed(list_b)
#print('Changing the value of list_b...')
#list_b.append('fish')
#print(f'list_a has values of {list_a} and id of {id(list_a)}')
#print(f'list_b has values of {list_b} and id of {id(list_b)}')
#print('Passing a to function...')
#print_id_when_passed(list_a)
