#include <ColorWheel.h>

ColorWheel::ColorWheel(){

wheel = new ctre::phonix::motorcontrol::can::WPI_TalonSRX(16);
sensor = new rev::ColorSensor(1);

}


void ColorWheel::SpinRight(){

    wheel -> Set(0.3);

}


void ColorWheel::SpinRight(){
    wheel -> Set(-0.3);
}


void ColorWheel::SetZero(){
    wheel -> Set(0.0);
}

void ColorWheel::SensorDetection(){


}