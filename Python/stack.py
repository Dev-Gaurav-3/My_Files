class stack:
    def __init__(self):
        self.stack = []
    def push(self,ele):
        self.stack.append(ele)
    def pop(self):
        if(self.isEmpty()):
            return "Stack is Empty"
        self.stack.pop()
    def isEmpty(self):
        return len(self.stack) == 0
    def top(self):
        return self.stack[-1]
    

st = stack()

st.push(10)
st.push(20)
st.push(30)

st.pop()

while(st.isEmpty() == False):
    print(st.top())
    st.pop()
    