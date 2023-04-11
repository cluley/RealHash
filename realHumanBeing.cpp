#include "realHumanBeing.h"

int real_string_hash(string str, int p, int n) {
	int hash(0);

	int length = str.length();

	for (int i = 0; i < length; i++) {
		hash += (pow(p, i) * str[i]);
	}

	return (hash % n);
}