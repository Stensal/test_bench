struct s {
	int m1;
	int m2;
	int m3;
	int m4;
};

int i = 3;

int main(int argc, char **argv) {
	struct s a[100];

	// fixed by Stensal Inc.
	a[i].m1 = 10;
	// KLARAM found a[i].m1 is not initialized
	i = a[i].m1;
	return 0;
}
