#pragma once
#define VERSION "SPECIAL AUTO TESTING 1.0"

// drive constants
#define LEFTMULT	1.0

// Sensor constants
#define AUTOGYROCONST -0.06
#define ANGTOLERANCE 5.0
#define ENCODERCONST 3.203

//PID Constants
#define TIMEPERIOD 0.00001
#define PCONSTANT -0.006
#define ICONSTANT -0.025	// was 300
#define DCONSTANT -0		// was 0.000125

#define AIM_P -0.012
#define AIM_I -0.025	// was 300
#define AIM_D -0		// was 0.000125

// VISION
#define MINVISION 168
#define MAXVISION 198
#define VISIONTARGET 178
#define VISIONMAXHEIGHT 70.0
#define XDIFFERENCEVAL 60
#define AUTODRIVEVISION 0.3

#define AUTOVISIONSPEED	0.36		// check this value!!!
#define AUTOTIMEMAX 15.0


#define DB_FREE_SPEED 5880.0

#define DBS_P -0.004
#define DBS_I -0.0
#define DBS_D 0.0
#define DBS_MAX 1.0

#define DBP_P 0.0
#define DBP_I 0.0
#define DBP_D 0.0
#define DBP_MAX 5880

#define PATH_DT 0.01


#define LIDAR_OFFSET -10.0

#define LIMELIGHT_DIST_CONSTANT 1.0
