#ifndef dArray_h
#define dArray_h

class dArray {
    private:
        int size;
        int* arr;
        int len;
        void reSize();

    public:
        dArray();
        dArray(int capacity);
        void print();
        void pushBack(int val);
        void pushFront(int val);
        int getLen();
        int& operator[](int idx);
        void remove(int idx);
        ~dArray();
        
};




#endif