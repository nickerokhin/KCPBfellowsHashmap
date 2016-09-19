//Hashmap

#include <stdio.h>
#include <string>
#include <iostream>
#ifndef HASHMAP_H
#define HASHMAP_H

/*
bool set(key, value)
get(key)
delete(key)
float(load)
*/
/*
struct hashNode{
		std::string key;
		void *value;
		hashNode *prev;
		hashNode *next;

		hashNode(std::string key, void *value){

			this->key = key;
			this->value = NULL;
			this->next = NULL;
			this->prev = NULL;
		}
	};

*/

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
	hashNode* hMap;


};

#endif