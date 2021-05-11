# Exploring allocation in sequential memory vs random memory on heap

The goals here are:
* explore how allocating a large block of memory and operating on objects within affects speed of program due to sequential memory access vs a program that merely allocates independent objects on the heap randomly
* Use `valgrind --tool massif <program> <args>` to see the difference
* Use `time` to also see a speed difference

## Questions

* why is it allocating so much more when doing individual objects on heap? presumably some of this is tracking bytes for the block, but also it must be allocating a larger amount of memory on heap each time (by a SIGNIFICANT amount) compared to the pre_allocate version
* Answer: 8 bytes per object extra allocated for admin purposes, huge effect on small obj size such as 11bytes, where 8 more will be added for admin only. Much, much more efficient to allocate a large block and amortize that cost across say a full GB in memory and pack objects much closer together. Not as pronounced, but not insignificant effect on obj sizes up to 512bytes. Supposing hundreds of GBs of RAM, would still be a huge waste.

