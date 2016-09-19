#include "hashMap.h"

hashMap::hashMap(){

	hashNode *hMap = new hashNode[size]; //Creates array hMap of size 64
/*
	for (int i=0; i<size; i++){
		hMap[i] = NULL;
	}
	*/

}

hashMap::~hashMap(){
	
	for(int i=0; i<size; i++){

		hashNode* cur = hMap[i];
		while(cur){
			hashNode *prev = cur;
			cur = cur->next;
			delete prev;
		}
	}
	delete [] hMap;
	
}


