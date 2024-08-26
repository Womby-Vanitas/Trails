int RightMotor_E_pin = 5;                                        // 오른쪽 모터의 Enable & PWM
int LeftMotor_E_pin = 6;                                         // 왼쪽 모터의 Enable & PWM
int RightMotor_1_pin = 8;                                        // 오른쪽 모터 제어선 IN1
int RightMotor_2_pin = 9;                                        // 오른쪽 모터 제어선 IN2
int LeftMotor_3_pin = 10;                                        // 왼쪽 모터 제어선 IN3
int LeftMotor_4_pin = 11;                                        // 왼쪽 모터 제어선 IN4

int L_Line = A5;                                                 // 왼쪽 라인트레이서 센서는 A5 핀에 연결
int C_Line = A4;                                                 // 가운데 라인트레이서 센서는 A4 핀에 연결
int R_Line = A3;                                                 // 오른쪽 라인트레이서 센서는 A3 핀에 연결

//
int L_MotorSpeed = 90;                                          // 왼쪽 모터 속도
int R_MotorSpeed = 90;                                          // 오른쪽 모터 속도
//

int SL = 1;
int SC = 1;
int SR = 1;

void setup() {
  pinMode(RightMotor_E_pin, OUTPUT);
  pinMode(LeftMotor_E_pin, OUTPUT);
  pinMode(RightMotor_1_pin, OUTPUT);
  pinMode(RightMotor_2_pin, OUTPUT);
  pinMode(LeftMotor_3_pin, OUTPUT);
  pinMode(LeftMotor_4_pin, OUTPUT);

}

void loop() {
  int L = digitalRead(L_Line);
  int C = digitalRead(C_Line);
  int R = digitalRead(R_Line);

  if ( L == LOW && C == LOW && R == LOW ) {           // 0 0 0
    L = SL; C = SC; R = SR;
  }

  // 직진
  if ( L == HIGH && R == HIGH ) {          // 0 1 0
    motor_role(HIGH, HIGH);
  }

  // 우회전
  else if ( L == LOW && R == HIGH ){                   // 0 0 1, 0 1 1
    motor_role(LOW, HIGH);
  }
 
  // 좌회전
  else if ( L == HIGH && R == LOW ) {                  // 1 0 0, 1 1 0
    motor_role(HIGH, LOW);
  }

  // 정지
  else if ( C == LOW ) {                // 1 1 1, 1 0 1
    analogWrite(RightMotor_E_pin, 0);
    analogWrite(LeftMotor_E_pin, 0);
  }
  SL = L; SC = C; SR = R;
}

void motor_role(int R_motor, int L_motor) {
  // 오른쪽 모터 제어
  digitalWrite(RightMotor_1_pin, R_motor);
  digitalWrite(RightMotor_2_pin, !R_motor);

  // 왼쪽 모터 제어
  digitalWrite(LeftMotor_3_pin, L_motor);
  digitalWrite(LeftMotor_4_pin, !L_motor);

  // 모터 속도 조절
  analogWrite(RightMotor_E_pin, R_motor ? R_MotorSpeed : 0);
  analogWrite(LeftMotor_E_pin, L_motor ? L_MotorSpeed : 0);
}
