# makefile

GCC=g++
TARGET_RANDOM=random_allocate
TARGET_PREALLOCATE=pre_allocate
SOURCE_RANDOM=random_allocate_source.cpp
SOURCE_PREALLOCATE=preallocate_source.cpp

all: 
	$(GCC) -g -o $(TARGET_RANDOM) $(SOURCE_RANDOM)
	$(GCC) -g -o $(TARGET_PREALLOCATE) $(SOURCE_PREALLOCATE)

clean:
	rm -f $(TARGET_RANDOM)
	rm -f $(TARGET_PREALLOCATE)
	rm -f *timings 

