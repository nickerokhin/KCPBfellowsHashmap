//Hashmap

#include <stdio.h>
#include <string>
#include <iostream>
#ifndef HASHMAP_H
#define HASHMAP_H
#define SIZE 64

/*
bool set(key, value)
get(key)
delete(key)
float(load)
*/


struct hashNode{
	std::string key;
	void * value;
	hashNode *next;
	hashNode *prev;
	hashNode(std::string k, void * v){
		key = k;
		value = v;
		next = NULL;
		prev = NULL;
	}
}

class hashMap{
public:
	hashMap();
	~hashMap();
	bool set(std::string inkey, int *invalue);
	int hash(std::string inkey);
	int* get(std::string inkey);
	void delete_node(std::string key);
	float load();
private:
	hashNode * hMap;
	int counter;

/*
		hashNode(std::string key, void *value){

			this->key = key;
			this->value = NULL;
			this->next = NULL;
			this->prev = NULL;
		}
	};
*/

};

#endif