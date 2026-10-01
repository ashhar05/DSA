
def create_largest_number(number_list):
    number_list.sort(reverse=True)
    n=""
    for i in number_list:
        n+=str(i)
    return int(n)
number_list=[23,45,67]
largest_number=create_largest_number(number_list)
print(largest_number)