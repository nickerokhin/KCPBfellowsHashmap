#include "hashMap.cc"
#include <typeinfo>

int main(){

	hashMap *hMap = new hashMap;
	//delete hMap;
	int random = 8;
	int *succ = &random;
	hMap->set("succ", succ);
	hMap->get("succ");

}
