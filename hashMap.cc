#include "hashMap.h"

hashMap::hashMap(){

	hashNode hMap[64];

	for (int i=0; i<SIZE; i++){
		hMap[i] = NULL;
	}

}

hashMap::~hashMap(){
	
	for(int i=0; i<SIZE; i++){

		hashNode* cur = hMap[i];
		while(cur){
			hashNode *prev = cur;
			cur = cur->next;
			delete prev;
		}
	}
	delete[] hMap;
	
}


