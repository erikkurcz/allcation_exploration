// Random allocation on the heap

#include "someobjects.hh"

#include <iostream>
#include <vector>

#include <stdlib.h>

void usage(){
    std::cout << "random_allocation N\n\nWhere N is amount of memory in MB to fill with objects, independently allocated on heap" << std::endl;
}

int main(int argc, char* argv[]){
    
    // parse how many
    if (argc != 2){
        usage();
        return 1;
    }

    int mb_to_fill(atoi(argv[1]));
    long MB_IN_BYTES(1024*1024);

    // do some math
    long long n_objects = (mb_to_fill*MB_IN_BYTES) / sizeof(HeapObject);

    std::cout << "Filling " << mb_to_fill << " MB with " << n_objects << " objects of " << sizeof(HeapObject) << " bytes in size" << std::endl;

    // vector for handles
    std::vector<HeapObject*> objects(n_objects);
    
    // make them all
    //for (int i = 0; i < n_objects; i++){
    //    objects[i] = new HeapObject;
    //}

    // do an operation on them
    bool resp(false);
    for (long long i = 0; i < n_objects; i++){
        for (int let_idx = 0; let_idx < 10; let_idx++){
            objects[i] = new HeapObject;
            resp = objects[i]->frobnicate(LETTERS[let_idx]);
        }
    }

    std::cout << "Done frobnicating!" << std::endl;

    return 0;
}
