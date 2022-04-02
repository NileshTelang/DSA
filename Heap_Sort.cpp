

#include<iostream>
#include<queue>
//#include<stack>
using namespace std;
int main()
{
    priority_queue<int> pq; //MaxHeap
    //stack <int> s;
    priority_queue<int, vector<int> , greater <int> > mq; //MinHeap 
    int i,a,n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>a;
        pq.push(a);
        mq.push(a);

    }
    cout<<"MaxHeap : "<<endl;
    while(!pq.empty()){
        cout<<pq.top();
        // int temp=pq.top();
        // s.push(temp);
        cout<<endl;
        pq.pop();
        
    }

    

    cout<<"MinHeap : "<<endl;
    while(!mq.empty()){
        cout<<mq.top();
        cout<<endl;
        mq.pop();
    
    }
    // cout<<"MinHeap : "<<endl;
    
    
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    //}

   
}


