#include "bubble_ART.h"
#include"bubble.h"
BUBBLE_ART::BUBBLE_ART(){
	Num = 50;
	Bubbles = new BUBBLE[Num];
}
BUBBLE_ART::~BUBBLE_ART(){
	delete[]Bubbles;
}
void BUBBLE_ART::perform() {
	colorMode(RGB);
	clear(255, 200, 200);
	for (int i = 0; i < Num; i++) {
		Bubbles[i].perform();
	}

}
