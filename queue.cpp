#include <iostream>
#include <queue>
#include <deque>
using namespace std;

// here i define the size of array queue 
#define size 5
int q[size];
// here front and rear is the end and the start of the queue
int front = -1;
int rear = -1;

void enqueue(int v); //function to entering elements to queue
void dequeue(); // f to delete the last element int the queue
int peek(); // print the last element 
void display();// function to display the elements in the queue



int main()
{
    enqueue(5);
    enqueue(53);
    enqueue(522);
    enqueue(523);
    display();
    dequeue();
    display();



    return 0;
}

void enqueue(int v)
{
    if(rear != size-1)
    {
        if(front== -1 && rear==-1)
        {
            front++;
            q[++rear] = v;
        }
        else
        {
            q[++rear] = v;
        }
    }
    else
    {
        cout<<" q is full" << endl;
    }
}

void dequeue()
{

    if(front != -1 && rear != -1 && front <= rear)
    {
        front++;
    }
    else
    {
        cout<< "queue is empty" << endl;
    }
}

int peek()
{
    if(front != -1 && rear != -1 && front <= rear)
    {
        return q[front];
    }
    else
    {
        cout<< "queue is empty" << endl;
    }
}

void display()
{
        if(front != -1 && rear != -1 && front <= rear)
    {
        for(int i=front;i<rear;i++)
        {
        cout<< q[i] << " ";
        }
        cout<< endl;
    }
    else
    {
        cout<< "queue is empty" << endl;
    }
}