class MyCircularQueue {
    private:
    vector<int> arr;
    int front, rear, size, capacity;
public:
    MyCircularQueue(int k) {
      capacity=k;
      arr.resize(capacity);
      front=0;
      rear=-1;
      size=0;
    }
    //push
    bool enQueue(int value) {
        if(isFull()) return false;
        rear=(rear+1)%capacity;
        arr[rear]=value;
        size++;
        return true;
    }
    //pop
    bool deQueue() {
        if(isEmpty()) return false;
        front=(front+1)%capacity;
        size--;
        return true;
    }
    //front
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    //rear
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

