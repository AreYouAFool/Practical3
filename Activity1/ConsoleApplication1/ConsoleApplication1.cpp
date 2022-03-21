#include <stdio.h>
#include <string>
std::string getAString() {
	return "This is a string";
}
int main() {
	std::string str = getAString();
	printf("%s", str.c_str()); // print a string using c_str()

	int selection = 0;
	printf("Enter a choice (1-3): ");
	scanf("%d", &selection); // read from the keyboard
	printf("You chose %d", selection);

	int val = 0;
	int read = scanf("%d", &val);
	if (read == 1) { // success
		printf("idk");

	char tmp[128];
	scanf(“%128s”, tmp);
	std::string result{ tmp };

	return 0;
}