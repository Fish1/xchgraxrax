#include <unistd.h>
#include <string.h>

int main() {
	char msg[15] = "Hello, World!\n";
	int len = strlen(msg);
	write(1, msg, len);
	return 0;
}
