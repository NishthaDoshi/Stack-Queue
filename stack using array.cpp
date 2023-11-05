 class Stack {

public:

    int size;
    int* arr;
    int topi;

    Stack(int n) {
        this -> size = n;
        arr = new int[size];
        topi = -1;

    }

    void push(int num) {
        if(!(topi == size - 1)){
            topi++;
            arr[topi] = num;
        }
        else return;
    }
    int pop() {
        if(!(topi == -1)){
            int x = arr[topi];
            topi--;
            return x;
        }
        else return -1;

    }

    

    int top() {
        if(topi == -1)return -1;
        else return arr[topi];
    }
    int isEmpty() {
        if(topi == -1)return 1;
        else return 0;

    }

    int isFull() {
        if (topi == size - 1)
            return 1;

        else
            return 0;
    }
    };
