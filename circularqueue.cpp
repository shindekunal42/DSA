#include<iostream>
#include<queue>
using namespace std;
class circularqueue{
    int* arr;
    int currsize,cap;
    int f,r;
    //craete constructor
    public:
    circularqueue(int size)
    {
        cap=size;
        arr =new int[cap];
        currsize=0;
        f=0;
        r=-1;
    }
    void push(int data){
        if(currsize==cap) {
            cout<<"CQ is Full"<<endl;
            return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currsize++;
    }
    void pop(){
      if(currsize==0) return;
      f=(f+1)%cap;
      currsize--;
    }
    int front(){
        if(currsize==0){ 
            return -1;
        }
        return arr[f];
    }
    bool empty(){
        return currsize==0;
    }
    void printArr() {
        for(int i=0; i<cap; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
};
int main() {
   circularqueue cq(3);
   cq.push(1);
   cq.push(2);
   cq.push(3);
   cq.pop();
   cq.push(4);
 
 cout<<"Array :";
 cq.printArr();
 cout<<"Circular Queue :";
while(!cq.empty()){
    cout<<cq.front()<<" ";
    cq.pop();
}

cout<<endl;
    return 0;
}

//output->
//Array :4 2 3 
//Circular Queue :2 3 4 