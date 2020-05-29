class PrintQueue(object):
    def __init__(self):
        self.items = []

    def enqueue(self, i):
        self.items.insert(0, i)

    def dequeue(self):
        if self.items:
            return self.items.pop()
        return None

    def peek(self):
        if self.items:
            return self.items[-1]
        return None

    def size(self):
        return len(self.items)

    def isEmpty(self):
        return self.items == []

    def print(self):
        return print("{}".format(self.items))