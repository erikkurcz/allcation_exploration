# Exploring allocation in sequential memory vs random memory on heap

The goals here are:
* explore how allocating a large block of memory and operating on objects within affects speed of program due to sequential memory access vs a program that merely allocates independent objects on the heap randomly
* Use `valgrind --tool massif <program> <args>` to see the difference
* Use `time` to also see a speed difference

## Questions

* why is it allocating so much more when doing individual objects on heap? presumably some of this is tracking bytes for the block, but also it must be allocating a larger amount of memory on heap each time (by a SIGNIFICANT amount) compared to the pre_allocate version
