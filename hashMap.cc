#include "hashMap.h"

//Hash function taken from Stackoverflow user Nick

hashMap::hashMap(){

	hMap = new hashNode[SIZE]; //Dynamically allocates a size 64 array of hashNodes

}

hashMap::hashMap(int sizein){
/*
	int size = sizein;
	hashNode *hMap = new hashNode*[size]; //Creates struct array of struct hashNode with size 64
	for(int i = 0; i<size; i++){
		hMap[i] = NULL;
	}
*/
}

hashMap::~hashMap(){
/*
	for(int i=0; i<size; ++i){

		hashNode *cur = hMap[i];
		while(cur != NULL){
			hashNode pre = cur;
			cur = cur.next;
			delete pre;
		}
	}
	delete [] hMap;
*/
}

int hashMap::hash(std::string key)   

{       int sum = 0;
        for (int k = 0; k < key.length(); k++)
            sum = sum + int(word[k]);
        return  sum % SIZE; 
}


bool hashMap::set(std::string inkey, void *valuein){
	int hash = hash(inkey);
	if(hMap[hash].value = NULL && hMap[hash].key == NULL && hMap[hash].next == NULL){
		hMap[hash].value = valuein;
		hMap[hash].key = inkey;
		return true;
	}

	if(hMap[hash].next != NULL){
		hashNode* cur = hMap[hash];
		while(cur->next != NULL){
			if (cur->next == NULL){
				cur->value = valuein;
				cur->key = keyin;
				return true;
			}
			cur = cur->next;
		}
	}
	else{sreturn false;}
}

int* hashMap::get(std::string inkey){
	int hash = hash(key);
	if(hMap[hash].key == key){
		return hMap[hash].value;
	}

	else if(hMap[hash].key != inkey){
		hashNode* cur = hMap[hash];
		while(cur->next != NULL){
			if(cur->key = inkey){
				return cur->value;
			}
			cur = cur->next;
		}

	}
	else{return false;}

}




