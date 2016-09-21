#include "hashMap.cc"
#include <typeinfo>

int main(){

	hashMap *hMap = new hashMap;
	//delete hMap;

	for(int i = 0; i<SIZE; i++){
		std::cout<<hMap[i].value<<std::endl;
	}

}
