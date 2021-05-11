## Exploring allocation in sequential memory vs random memory on heap

The goals here are:
* explore how allocating a large block of memory and operating on objects within affects speed of program due to sequential memory access vs a program that merely allocates independent objects on the heap randomly
* Use `valgrind --tool massif <program> <args>` to see the difference
* Use `time` to also see a speed difference


