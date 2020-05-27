import random
from PrinterQueue import PrintQueue

class Job(object):
    def __init__(self):
        self.pages = random.randint(1, 15)

    def print_page(self):
        print("Printing ", self.pages)
        self.pages -= 1

    def check_complete(self):
        return self.pages == 0

class Printer(object):
    def __init__(self):
        self.job = None

    def get_job(self, q):
        if q.items:
            self.job = q.dequeue()
            return self.job
        else:
            return None


    def print_job(self):
        while self.job.pages > 0:
            self.job.print_page()
        if self.job.check_complete():
            return "Printing complete"
        else:
            return "In progress"

job1 = Job()
job2 = Job()
job3 = Job()

jobs = [job1, job2, job3]

print_q = PrintQueue()
printer = Printer()

for i in jobs:
    print_q.enqueue(i)

while printer.get_job(print_q) != None:
    print(printer.print_job())