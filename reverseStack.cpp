#include<iostream>
using namespace std;

#define MAX 100

class Deque
{
	int arr[MAX];
	int front;
	int rear;
	int size;
public :
	Deque(int size)
	{
		front = -1;
		rear = 0;
		this->size = size;
	}

	// Operations on Deque:
	void insertFront(int key);
	void insertRear(int key);
	void deleteFront();
	void deleteRear();
	bool isFull();
	bool isEmpty();
	int getFront();
	int getRear();
};
.
bool Deque::isFull()
{
	return ((front == 0 && rear == size-1)||
			front == rear+1);
}

bool Deque::isEmpty ()
{
	return (front == -1);
}

// Inserts an element at front
void Deque::insertFront(int key)
{
	// check whether Deque if full or not
	if (isFull())
	{
		cout << "Overflow\n" << endl;
		return;
	}

	// If queue is initially empty
	if (front == -1)
	{
		front = 0;
		rear = 0;
	}

	// front is at first position of queue
	else if (front == 0)
		front = size - 1 ;

	else // decrement front end by '1'
		front = front-1;

	// insert current element into Deque
	arr[front] = key ;
}

// function to inset element at rear end
// of Deque.
void Deque ::insertRear(int key)
{
	if (isFull())
	{
		cout << " Overflow\n " << endl;
		return;
	}

	// If queue is initially empty
	if (front == -1)
	{
		front = 0;
		rear = 0;
	}

	// rear is at last position of queue
	else if (rear == size-1)
		rear = 0;

	// increment rear end by '1'
	else
		rear = rear+1;

	// insert current element into Deque
	arr[rear] = key ;
}

// Deletes element at front end of Deque
void Deque ::deleteFront()
{
	// check whether Deque is empty or not
	if (isEmpty())
	{
		cout << "Queue Underflow\n" << endl;
		return ;
	}

	// Deque has only one element
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
		// back to initial position
		if (front == size -1)
			front = 0;

		else // increment front by '1' to remove current
			// front value from Deque
			front = front+1;
}

// Delete element at rear end of Deque
void Deque::deleteRear()
{
	if (isEmpty())
	{
		cout << " Underflow\n" << endl ;
		return ;
	}

	// Deque has only one element
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if (rear == 0)
		rear = size-1;
	else
		rear = rear-1;
}

// Returns front element of Deque
// int Deque::printElements(){
// 	if(!isEmpty()){
// 		int start = front;
// 		int end = rear;
// 		while(start <= rear){
// 			cout << arr[start] << " ";
// 			start = (start + 1)%size;
// 		}
// 		cout << endl;
// 	}
// 	else 
// 	cout << "Queue is Empty."
// }
int Deque::getFront()
{
	// check whether Deque is empty or not
	if (isEmpty())
	{
		cout << " Underflow\n" << endl;
		return -1 ;
	}
	return arr[front];
}

// function return rear element of Deque
int Deque::getRear()
{
	// check whether Deque is empty or not
	if(isEmpty() || rear < 0)
	{
		cout << " Underflow\n" << endl;
		return -1 ;
	}
	return arr[rear];
}

// Driver program to test above function
int main()
{
	Deque dq(5);
	cout << "Insert element at rear end : 5 \n";
	dq.insertRear(5);

	cout << "insert element at rear end : 10 \n";
	dq.insertRear(10);

	cout << "get rear element " << " "
		<< dq.getRear() << endl;

	dq.deleteRear();
	cout << "After delete rear element new rear"
		<< " become " << dq.getRear() << endl;

	cout << "inserting element at front end \n";
	dq.insertFront(15);

	cout << "get front element " << " "
		<< dq.getFront() << endl;

	dq.deleteFront();

	cout << "After delete front element new "
	<< "front become " << dq.getFront() << endl;

	// cout << "Total elements presnts are: " << dq.printElements() << endl;

	return 0;
}
