from queue import Queue


class My_Queue:

    def __init__(self, queue_size):
        self.queue = Queue(maxsize=queue_size)

    def enqueue(self, item):
        if self.queue.full():
            print("The queue is full")
            return
        self.queue.put(item)

    def dequeue(self):
        if self.queue.empty():
            print("The queue is empty cannot dequeue")
            return
        self.queue.get()

    def show_queue(self):
        print(self.queue.__str__())


