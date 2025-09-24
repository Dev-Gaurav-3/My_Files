class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LL:

    def __init__(self):
        self.head = None
    
    def insert(self,val):
        new_node = Node(val)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while(temp.next):
            temp = temp.next
        temp.next = new_node
    
    def show(self):
        temp = self.head
        while(temp):
            print(temp.data,end = "->")
            temp = temp.next
        print("none")
    def search(self,key):
        temp = self.head
        while(temp):
            if(temp.data == key):
                print(True)
                return 
            temp = temp.next
        print(False)
        return 



l1 = LL()

l1.insert(10)
l1.insert(20)
l1.insert(30)
l1.insert(40)

l1.show()

l1.search(0)