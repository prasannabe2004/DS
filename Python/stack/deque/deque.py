class deque(object):
    def __init__(self):
        self.items = []

    def add_front(self,i):
        self.items.insert(0, i)

    def add_rear(self,i):
        self.items.append(i)

    def remove_front(self):
        return self.items.pop(0)

    def remove_rear(self):
        return self.items.pop()

    def peek_front(self):
        return self.items[0]

    def peek_rear(self):
        return self.items[-1]

    def size(self):
        return len(self.items)

    def isEmpty(self):
        return self.items == []


