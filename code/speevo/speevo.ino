byte one[] = {B0, B10001, B1010, B100, B0};
byte two[] = {B10001, B10011, B10101, B01100, B100};
byte three[] = {B100, B100, B10101, B11011, B10001};
byte four[] = {B100, B1100, B10100, B1010, B10001};
byte five[] = {B10001, B11001, B10101, B110, B100};
byte six[] = {B100, B1110, B10101, B10011, B10001};
byte seven[] = {B0, B0, B10100, B11010, B10001};
byte eight[] = {B100, B1110, B10101, B11011, B10001};
byte nine[] = {B100, B1100, B10101, B11011, B10001};
byte zero[] = {B100, B1010, B10101, B11011, B10001};

int i = 0;

void setup() {
    DDRD = 0xff;
}

void loop() {
    for (i=0; i<5; i++) {
        PORTD = one[i];
        delayMicroseconds(3600);
    };
    for (i=0; i<5; i++) {
        PORTD = one[i];
        delayMicroseconds(36000/15);
    };
    for (i=0; i<5; i++) {
        PORTD = five[i];
        delayMicroseconds(36000/15);
    };
    for (i=0; i<5; i++) {
        PORTD = one[i];
        delayMicroseconds(36000/20);
    };
    for (i=0; i<5; i++) {
        PORTD = two[i];
        delayMicroseconds(36000/25);
    };
    for (i=0; i<5; i++) {
        PORTD = five[i];
        delayMicroseconds(36000/25);
    };
    for (i=0; i<5; i++) {
        PORTD = one[i];
        delayMicroseconds(36000/30);
    };
    delayMicroseconds(3600);
}
