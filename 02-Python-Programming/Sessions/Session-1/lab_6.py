num_1, num_2 = input("Enter two numbers: ").split(" ", 2)
op = input("Enter opreation(Add, Sub, Mul, Div): ")

num_1 = int(num_1)
num_2 = int(num_2)

my_list = [num_1 + num_2, num_1 - num_2, num_1 * num_2, num_1 / num_2]

my_tuple = (num_1 + num_2, num_1 - num_2, num_1 * num_2, num_1 / num_2)


my_dict = {
    "Add" : num_1 + num_2,
    "Sub" : num_1 - num_2,
    "Mul" : num_1 * num_2,
    "Div" : num_1 / num_2
    }

if op == "Add" :
    print(my_list[0])
    print(my_tuple[0])
    print(my_dict["Add"])

if op == "Sub" :
    print(my_dict["Sub"])

if op == "Mul" :
    print(my_dict["Mul"])

if op == "Div" :
    print(my_dict["Div"])


