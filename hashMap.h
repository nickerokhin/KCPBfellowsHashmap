//Hashmap

#include <stdio.h>
#include <iostream>
#define SIZE 64;
#include "hashMap.cc"


class hashMap{
public:
	hashMap(int size);
	~hashMap();
	bool set(std::string key, int *value);
	void get(std::string key);
	void delete(key);
	float load();
	struct hashNode{
		std::string key;
		int *value;
		struct *prev;
		struct *next;
	};


}