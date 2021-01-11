Question link - https://leetcode.com/problems/design-circular-queue/

vector<int> data;
    int size,front,rear,count;
    MyCircularQueue(int k) {
        data.resize(k);
        size=k;
        count=0;
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        if(rear==-1)
        {   rear++;
            data[rear]=value;
            count++;
            front++;
            return true;
        }
        else
        {
            
            rear=(rear+1)%size;
            data[rear]=value;
            count++;
            return true;
        }
    }    
    
    bool deQueue() {
        if(isEmpty())
            return false;
        if(front==rear)
        {
            front=-1;
            rear=-1;
            count--;
            return true;
        }
        else
        {
            front=(front+1)%size;
            count--;
            return true;
        }
        
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        else
            return data[front];
        
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        else
            return data[rear];
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==size;
    }
};
