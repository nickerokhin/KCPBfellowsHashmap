#include "hashMap.h"

hashMap::hashMap(){

	hashNode * hMap[64];
	for(int i = 0; i<64; i++){
		hMap[i] = NULL;
	} 

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
/*
bool hashMap::set(std::string key, int *value){

}
*/

