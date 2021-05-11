// A 512 byte object

const int SIZE(512);
const char LETTERS[10] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
};

class HeapObject {

    private: 
        char data[SIZE];

    public:
        HeapObject(void){ };
        bool frobnicate(char let) volatile {
            for (int i = 0; i < SIZE; i++){
                data[i] = let;
            }
            return true;
        }
};
