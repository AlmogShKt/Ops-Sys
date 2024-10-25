//Name:  ID: 
// This code is running when we type ps in xv6, it calls the cps171() command defined in the user mode
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[]) {
	cps171();
	exit();
}

