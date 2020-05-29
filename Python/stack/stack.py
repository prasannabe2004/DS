class stack(object):
    def __init__(self):
        self.items = []
    def size(self):
        return len(self.items)
    def push(self,i):
        self.items.append(i)
    def pop(self):
        if self.isEmpty():
            return None
        return self.items.pop()
    def peek(self):
        return self.items[-1]    
    def isEmpty(self):
        return self.items == []
    def print(self):
        print("{}".format(self.items))