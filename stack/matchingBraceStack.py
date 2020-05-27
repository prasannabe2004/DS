from stack import stack

s = stack()

openB = ['{','[','(']
closeB = ['}',']',')']

input = "()[[{}"

flag = False

for i in input:
    if i in openB:
        s.push(i)
    else:
        l = s.peek()
        if openB.index(l) == closeB.index(i):
            s.pop()
        else:
            flag = False
            break;

if s.isEmpty():
    flag = True        

print(flag)