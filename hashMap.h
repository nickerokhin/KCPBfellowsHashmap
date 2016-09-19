//Hashmap

#include <stdio.h>
#include <string>
#include <iostream>
#ifndef HASHMAP_H
#define HASHMAP_H



class hashMap{
public:
	hashMap(int sizein);
	hashMap();
	~hashMap();
	bool set(std::string key, int *value);
	void get(std::string key);
	void delete_node(std::string key);
	float load();
	int size;
private:
	struct hashNode{
		std::string key;
		int *value;
		hashNode *prev;
		hashNode *next;
	};
	hashNode *hMap;


};

#endif