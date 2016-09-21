#include "hashMap.h"

//Hash function taken from Stackoverflow user Nick

hashMap::hashMap(){

	hMap = new hashNode[SIZE]; //Dynamically allocates a size 64 array of hashNodes

}
/*
hashMap::hashMap(int sizein){

	int size = sizein;
	hashNode *hMap = new hashNode*[size]; //Creates struct array of struct hashNode with size 64
	for(int i = 0; i<size; i++){
		hMap[i] = NULL;
	}
*/


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
            sum = sum + int(key[k]);
        return  sum % SIZE; 
}


bool hashMap::set(std::string inkey, void *invalue){
	int hash1 = hash(inkey);
	if(hMap[hash1].value = NULL && hMap[hash1].key == "" && hMap[hash1].next == NULL){
		hMap[hash1].value = invalue;
		hMap[hash1].key = inkey;
		return true;
	}

	if(hMap[hash1].next != NULL){
		hashNode* cur = &hMap[hash1];
		while(cur->next != NULL){
			if (cur->next == NULL){
				hashNode* newNode = new hashNode;
				cur->next = newNode;
				newNode->value = invalue;
				newNode->key = inkey;
				return true;
			}
			cur = cur->next;
		}
	}
	else{return false;}
}

void* hashMap::get(std::string inkey){
	int hash1 = hash(inkey);
	if(hMap[hash1].key == inkey){
		return hMap[hash1].value;
	}

	else if(hMap[hash1].key != inkey){
		hashNode* cur = &hMap[hash1];
		while(cur->next != NULL){
			if(cur->key == inkey){
				return cur->value;
			}
			cur = cur->next;
		}

	}
	else{return false;}

}




