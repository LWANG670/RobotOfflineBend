//! 组成机器人轴的数量
extern const int AXIS_NUMBER = 7;

//!判断是否为零所用小数
extern const  double EPSILON_D = 1e-6;
extern const  float EPSILON_F = 1e-5f;

// M_PI 3.14159265358979323846
//! 将角度转化为弧度
extern const float ANG2RAD = 0.017453292519943295769f; // pi/180
//! 将弧度转化为角度
extern const float RAD2ANG = 57.2957795130823208768f; //180/pi