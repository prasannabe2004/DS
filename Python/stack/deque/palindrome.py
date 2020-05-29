from deque import deque

inp = input("Word:")

d = deque()

for i in inp:
    d.add_rear(i)

print(d.items)

def checkPalindrome(d):
    if d.size() == 1:
        return True
    while d.size() >= 2:
        if d.remove_front() != d.remove_rear():
            return False
    return True

print(inp,checkPalindrome(d))
