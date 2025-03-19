from collections import deque


class Queue:
    def __init__(self):
        self.queue = deque()

    def enqueue(self, item):
        self.queue.append(item)

    def dequeue(self):
        if self.is_empty():
            raise IndexError("empty queue failed to dequeue")
        return self.queue.popleft()

    def peek(self):
        if self.is_empty():
            raise IndexError("empty queue, peek failed")
        return self.queue[0]

    def is_empty(self):
        return len(self.queue) == 0

    def size(self):
        return len(self.queue)

    def __str__(self):
        return str(self.queue)


def main():
    q = Queue()
    q.enqueue(10)
    q.enqueue(20)
    q.enqueue(30)
    print("Queue:", q)  # Output: Queue: [10, 20, 30]
    print(q.__str__)
    print("Dequeue:", q.dequeue())  # Output: Dequeue: 10
    print("Queue after dequeue:", q)  # Output: Queue after dequeue: [20, 30]
    print(q.__str__)
    print("Peek:", q.peek())  # Output: Peek: 20
    print("Is queue empty?", q.is_empty())  # Output: Is queue empty? False
    print("Queue size:", q.size())  # Output: Queue size: 2
    print(q.__str__)


if __name__ == "__main__":
    main()
