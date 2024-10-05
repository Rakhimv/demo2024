#include <iostream>

int main() {
	int star;

	std::cout<<"Кол-во звезд: ";
	std::cin>>star;
	

	for(char i=0;i<star;++i) {
		for(char j=0;j<star-i;++j) {
			std::cout<<" ";
		}

		std::cout<<"*";


		for(char j=0;j<i;++j) {
                        std::cout<<"**";
                }



		for(char j=0;j<star-i;++j) {
                        std::cout<<" ";
                }


		std::cout<<"\n";
	}
}
