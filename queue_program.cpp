#include <iostream>
#include<queue>
using namespace std;

int main() {
  //creation
  queue<int>q;
  //inserion
  q.push(5);
  q.push(15);
  q.push(25);
  q.push(35);
  //size check
  cout<<"Size of queue is: "<< q.size() <<endl;
  //deletion
  q.pop();
  cout<<"Size of queue is: "<< q.size() <<endl;
  //front
  cout<<"Front of queue is:"<<q.front()<<endl;
  //rear
  cout<<"Rear of queue is:"<<q.back()<<endl;
  //print whole queue
  queue<int> temp = q;  // make a copy of the original queue

    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
  //empty
  if(q.empty()){
    cout<<"Queue is  empty"<<endl;
  }  
  else{
    cout<<"Queue is not empty"<<endl;
  }
  return 0;
}