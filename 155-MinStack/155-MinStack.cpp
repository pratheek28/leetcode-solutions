// Last updated: 7/25/2026, 7:28:14 PM
class MinStack {
    int* array;
    int size;
    int MAX_SIZE = 10;

    void resize() {
        int* copy = new int[MAX_SIZE * 2];
        for (int i = 0; i < size; i++) {
            copy[i] = array[i];
        }
        delete[] array;
        array = copy;
        MAX_SIZE *= 2;
    }
public:
    MinStack() {
        array = new int[MAX_SIZE];
        size = 0;
    }
    
    void push(int val) {
        if (size == MAX_SIZE) resize();
        array[size] = val;
        size++;
    }
    
    void pop() {
        size--;
    }
    
    int top() {
        return array[size - 1];
    }
    
    int getMin() {
        int min = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */