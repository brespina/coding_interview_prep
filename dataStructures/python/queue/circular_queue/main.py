class CircularQueue:
    def __init__(self, capacity):
        self.capacity = capacity
        self.queue = [None] * capacity
        self.front = self.rear = -1

    def enqueue(self, item):
        """Add an item to the queue."""
        if self.is_full():
            raise IndexError("Enqueue to a full queue")
        if self.is_empty():
            self.front = self.rear = 0
        else:
            self.rear = (self.rear + 1) % self.capacity
        self.queue[self.rear] = item

    def dequeue(self):
        """Remove and return the item from the front of the queue."""
        if self.is_empty():
            raise IndexError("Dequeue from an empty queue")
        item = self.queue[self.front]
        if self.front == self.rear:
            self.front = self.rear = -1
        else:
            self.front = (self.front + 1) % self.capacity
        return item

    def peek(self):
        """Return the item at the front of the queue without removing it."""
        if self.is_empty():
            raise IndexError("Peek from an empty queue")
        return self.queue[self.front]

    def is_empty(self):
        """Check if the queue is empty."""
        return self.front == -1

    def is_full(self):
        """Check if the queue is full."""
        return (self.rear + 1) % self.capacity == self.front

    def size(self):
        """Return the number of items in the queue."""
        if self.is_empty():
            return 0
        if self.rear >= self.front:
            return self.rear - self.front + 1
        return self.capacity - self.front + self.rear + 1

    def __str__(self):
        """Return a string representation of the queue."""
        if self.is_empty():
            return "[]"
        if self.rear >= self.front:
            return str(self.queue[self.front:self.rear + 1])
        return str(self.queue[self.front:] + self.queue[:self.rear + 1])


# Example usage
if __name__ == "__main__":
    cq = CircularQueue(3)
    cq.enqueue(10)
    cq.enqueue(20)
    cq.enqueue(30)
    print("Circular Queue:", cq)  # Output: Circular Queue: [10, 20, 30]
    print("Dequeue:", cq.dequeue())  # Output: Dequeue: 10
    print(
        "Circular Queue after dequeue:", cq
    )  # Output: Circular Queue after dequeue: [20, 30]
    cq.enqueue(40)
    print(
        "Circular Queue after enqueue:", cq
    )  # Output: Circular Queue after enqueue: [20, 30, 40]
    print("Is queue full?", cq.is_full())  # Output: Is queue full? True
