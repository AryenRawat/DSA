class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        output.push(x);
        while(!output.empty()){
            input.push(output.top());
            output.pop();
        }
    }

    int dequeue() {
        int x=-1;
        if(input.empty()){
            return x;
        }else{
            x=input.top();
            input.pop();
            return x;
        }
    }
};
