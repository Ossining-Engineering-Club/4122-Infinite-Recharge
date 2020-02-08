#include <Bling.h>
#

Bling::Bling(){

ledcontroller = new Spark(5);

}

void Bling::BlingRed(){
ledcontroller -> Set(0.61);
}

void Bling::BlingBlue(){
ledcontroller -> Set(0.87);
}

void BlingGreen(){
ledcontroller -> Set(0.77);
}