#include "pine.h"
#include "utils.h"
#include <iostream>
#include <cstring>


Pine::Pine(){
	std::cout << "Planting a Pine - at address : " << this<<std::endl;
	width = 8;
	height = 4;
	image = new Pixel[width*height];
	unsigned int texture[]={8,28,62,8};
	Pixel color = Pixel(0,alea(20,255),0);
	buildImage(image,width,height,texture, color);
}

Pine::Pine(const Pine& s){
	std::cout << "Copying a Pine - at address : " << this <<std::endl;
	width = s.width;
	height = s.height;
	image = new Pixel[s.width*s.height];
	unsigned int texture[]={8,28,62,8};	
	buildImage(image,s.width,s.height,texture, Pixel(0,alea(20,255),0));
}

	Pine::~Pine()
{
	std::cout << "Cutting down a pine - at address : " << this  <<std::endl;
	delete [] image; // free the memory
}

void Pine::draw(){
	for (int i=0;i<width*height;i++){
        std::cout << image[i] ;
        if (i%width==0) {
			std::cout << std::endl;
		}
    }
    std::cout << "[0m"<< std::endl;
}

void Pine::info(){
	std::cout << "Pine address : " << this <<std::endl;
	std::cout << "Pine's image address : " << image << std::endl;
}