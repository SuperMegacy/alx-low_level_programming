#include<stdio.h>

/**
* start - constructor attribute to myStartupFun() to
* execut before main()
*/
void start(void) __attribute__((constructor));


/**
* start - implementation of myStartupFun
*/
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
