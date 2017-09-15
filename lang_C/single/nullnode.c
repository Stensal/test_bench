struct foo {
  int bar;
};

struct foo *curcmd;
int tmps_max;
int tmps_base;

#define CF_FLIP 020000
#define CF_COND 01000

int main() {
    struct foo *cmd;
    int cmdflags;

	// fixed by Stensal Inc. 
	cmd = 0;
    if (cmdflags & CF_COND) {

    goto maybe;
    flipmaybe:
	if (cmdflags) {
	    while (tmps_max > tmps_base) {	/* clean up after last eval */
	    }
	}
    maybe:
	curcmd = cmd; // reported by Klaram that uninitialized value is assigned
    }

    return 0;
}
