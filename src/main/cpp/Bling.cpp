#include <Bling.h>


Bling::Bling(){

blinkin = new Spark(5);

}

void Bling::BlingRed(){
blinkin -> Set(0.61);
}

void Bling::BlingBlue(){
blinkin -> Set(0.87);
}
