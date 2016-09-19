#include "hashMap.h"

hashMap::hashMap(){

	hashNode *hMap = new hashNode[64]; //Creates struct array of struct hashNode with size 64


}

hashMap::hashMap(int sizein){
	int size = sizein;
	hashNode *hMap = new hashNode[size];

}

hashMap::~hashMap(){
	
	for(int i=0; i<size; i++){

		hashNode *cur = &hMap[i];
		while(cur != NULL){
			hashNode *prev = cur;
			cur = cur->next;
			delete prev;
		}
	}
	delete [] hMap;
	
}


