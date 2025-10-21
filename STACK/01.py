# STACK IMPLEMENTATION USING PYTHON
st = []
N = 5
def push():
    if(len(st)==N-1):
        print("full")
    else:
        item = int(input("enter the item: "))
        st.append(item)
        print(f"pushed item is: {item}")

def pop():
    if(len(st)==-1):
        print("empty")
    else:
        item = st.pop()
        print(f"deleted item is: {item}")

def display():
    if(len(st)==-1):
        print("empty")
    else:
        print("current stack:",st)

while True:
    choice = int(input("enter your choice: "))
    if(choice==1):
        push()
    elif(choice==2):
        pop()
    elif(choice==3):
        display()
    else:
        print("exiting")
        break

