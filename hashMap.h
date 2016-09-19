//Hashmap

#include <stdio.h>
#include <iostream>
#define SIZE 64;


class hashMap{
public:
	hashMap(int size);
	~hashMap();
	bool set(std::string key, int *value);
	void get(std::string key);
	void delete(key);
	float load();
private:
	struct hashNode{
		std::string key;
		int *value;
		int *prev;
		int *next;
	}


}