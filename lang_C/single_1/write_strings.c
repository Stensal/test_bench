/*$ -Wwrite-strings $*/
#include <wchar.h>

int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	char *p = "hallo";
	wchar_t *w = L"hallo";
	(void) p;
	(void) w;

	return 0;
}
