# IMPLEMENTATION OF QUEUE IN PYTHON
class queue:
    def __init__(self,size):
        self.queue = []
        self.size = size

    def enqueue(self, item):
        if len(self.queue) == self.size:
            print("Queue is full")
        else:
            self.queue.append(item)
            print(f"Enqueued: {item}")


    def dequeue(self):
        if self.is_empty():
            print("Queue is empty")
        else:
            removed = self.queue.pop(0)
            print(f"Dequeued: {removed}")

    
    def peek(self):
        if self.is_empty():
            print("Queue is empty")
        else:
            print(f"Front element: {self.queue[0]}")

    
    def display(self):
        if self.is_empty():
            print("Queue is empty")
        else:
            print("Queue elements:", self.queue)

  
    def is_empty(self):
        return len(self.queue) == 0




q = queue(5)
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
q.display()
q.dequeue()
q.display()
q.peek()
