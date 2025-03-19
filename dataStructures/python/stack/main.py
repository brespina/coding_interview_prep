class Stack:
    def __init__(self):
        self.items = []

    def stack_push(self, item):
        self.items.append(item)

    def stack_pop(self):
        if self.is_empty():
            raise IndexError("stack is empty, cannot pop")
        else:
            return self.items.pop()

    def stack_top(self):
        return self.items[-1]

    def stack_size(self):
        return len(self.items)

    def is_empty(self):
        if len(self.items) == 0:
            return True
        else:
            return False


def main():
    my_stack = Stack()

    my_stack.stack_push("A")
    my_stack.stack_push("B")
    my_stack.stack_push("C")

    print(my_stack.stack_top())
    print(my_stack.stack_size())
    print(my_stack.stack_pop())
    print(my_stack.stack_pop())
    print(my_stack.is_empty())
    print(my_stack.stack_pop())
    print(my_stack.is_empty())


if __name__ == "__main__":
    main()
