hashMap::hashMap(SIZE){

	hashNode hMap[SIZE];

	for (int i=0; i<SIZE-1; i++){
		hMap[i] = NULL;
	}

}

hashMap::~hashMap(){
	for(i=0; i<SIZE-1; i++){

		hashNode* cur = hMap[i]
		while(cur){
			hashNode *prev = cur;
			cur = cur->next;
			delete prev;
		}
	}
	delete[] hMap;
}
