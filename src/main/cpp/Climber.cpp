#include <Climber.h>

Climber::Climber(){

    climber = new ctre::phoenix::motorcontrol::can::WPI_TalonFX(18);
    
}

void Climber::ClimberUp(int power){
    climber-> Set(power);
    

}

void Climber::ClimberDown(int power){
    climber-> Set(power);
}

void Climber::ClimberRestriction(){
 
     climber -> Set(100.00);
}

