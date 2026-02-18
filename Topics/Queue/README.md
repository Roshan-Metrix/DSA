# Queue 
A queue is a linear data structure that follows the First In First Out (FIFO) principle. It is an abstract data type that allows for the addition of elements at the rear and the removal of elements from the front.

### Two main principal operations:
1. **Enqueue**: Adds an element to the rear of the queue.
2. **Dequeue**: Removes the element from the front of the queue.

### Other operations include:
3. **Peek/Front**: Returns the front element of the queue without removing it.
4. **isEmpty**: Checks if the queue is empty.
5. **Size**: Returns the number of elements in the queue.

### Queues are commonly used in various applications such as:
- **Scheduling**: Queues are used in operating systems for scheduling tasks and managing processes.
- **Breadth-First Search (BFS)**: Queues are used in graph traversal algorithms like BFS to explore nodes level by level.
- **Print Spooling**: Queues are used to manage print jobs in a printer queue.
- **Customer Service Systems**: Queues are used in customer service systems to manage waiting lines and ensure that customers are served in the order they arrived.

## Types of Queues:
1. **Queue**: A queue is a data structure where each element has a priority assigned to it. Elements with higher priority are dequeued before elements with lower priority, regardless of their order in the queue.
2. **Circular Queue**: A circular queue is a linear data structure that uses a single, fixed-size buffer as if it were connected end-to-end. It allows for efficient use of space by reusing the empty slots created by dequeued elements.
3. **Double-Ended Queue (Deque)**: A deque is a data structure that allows for the addition and removal of elements from both the front and rear of the queue. It can be used as both a stack and a queue.