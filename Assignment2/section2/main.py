def add_one():
    def inner(number):
        return number + 1
    return inner

increment = add_one()
print(increment(4)) 