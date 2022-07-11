# Memory allocation test

### Background:
* Below, a short test involving memory allocation and data structures.
* You can and are encouraged to use whatever information resource you like, but please note a short reference to it down below.
* The questions are written in C++, but you can use which ever language  you most comfortable with.
* When designing a solution, you should think about the time complexity of it and if there is a more optimized way of implementation.
* You can take your time when answering the questions in the test and when ready please submit your solution using any method you are comfortable with.
* Please note how long (roughly) it took you to complete the test.
* If you have any questions, feel free to ask me or Sagi at any time.
* Please try to document your thinking process and an explain your motivations of the ways chosen for solving the problems at hand.
* Remember that way is more important than the final solution here.

1. Describe the difference between an `Array` and a `LinkedList`.
2. Implement a linked list:
 * given the following class `Node`, implement the following interface `ILinkedList`:
 
	```cpp
	struct Node {
		int val;
		Node* next;
	};
	
	class ILinkedList {
	public:
		virtual ~ILinkedList(){};
		
		virtual Node* add(int val) = 0;

		virtual void remove(Node* node) = 0;
	};
	```
3. Given a pre-allocated buffer - `std::array<int, 100>` of integers, implement the following base class:
	```cpp
	class IntAllocatorBase {
	public:
		virtual int* allocate(size_t size) = 0;
		
		virtual void deallocate(int* ptr, size_t size) = 0;
	private:
		std::array<int, 100> m_buffer;
	};
	```
	* for simplicity, you can assume that every call to either `allocate` or `deallocate` are valid calls and you should have sufficient resources to handle them.
	* You can use any type from the standard library. 
