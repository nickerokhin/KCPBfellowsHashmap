#include "hashMap.cc"
#include <typeinfo>

int main(){

	hashMap *hMap = new hashMap;
	//delete hMap;

	for(int i = 0; i<64; i++){
		std::cout<<*hMap[i]<<std::endl;
	}

}
