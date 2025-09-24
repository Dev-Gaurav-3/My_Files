class queue:
    def __init__(self):
        self.queue = []
    
    def push(self,val):
        self.queue.append(val)
    def front(self):
        return self.queue[0]
    def isEmpty(self):
        return len(self.queue) == 0 
    def pop(self):
        if(self.isEmpty()):
            print("queue is empty")
        self.queue.pop(0)

q = queue()

q.push(10)
q.push(20)
q.push(30)

q.pop()

while(q.isEmpty() == False):
    print(q.front())
    q.pop()

