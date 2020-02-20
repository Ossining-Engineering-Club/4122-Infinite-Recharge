#include <ColorWheel.h>

ColorWheel::ColorWheel(){

wheel = new ctre::phoenix::motorcontrol::can::WPI_TalonSRX(16);
//sensor = new rev::ColorSensorV3(18, rev::ColorSensorV3);

}


void ColorWheel::SpinRight(){

  wheel -> Set(0.3);

}


void ColorWheel::SpinLeft(){
  wheel -> Set(-0.3);
}


void ColorWheel::SetZero(){
  wheel -> Set(0.0);
}

void ColorWheel::SensorDetection(){


}