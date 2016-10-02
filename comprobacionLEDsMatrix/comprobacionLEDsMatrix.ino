byte colPins[3] = {5,4,3}; // insert the pins connected to columns of the keypad
byte rowPins[4] = {9,8,7,6}; // insert the pins connected to rows of the keypad

int pins[17]= {-1, 22, 24, 26, 28, 30, 32, 34, 36, 21, 20, 19, 18, 17, 16, 15, 14};// insert the pins conected to Led matrix (the first pin is fictitious and it is used to start the array with index 1)
int cols[8] = {pins[13], pins[3], pins[4], pins[10], pins[06], pins[11], pins[15], pins[16]}; //insert columns of the Led matrix
int rows[8] = {pins[9], pins[14], pins[8], pins[12], pins[1], pins[7], pins[2], pins[5]};//insert rows of the Led matrix 
/*Function to turn off all leds*/
void AllLedOFF()
{//the diodes are polarized inverse (anodes to ground and cathodes to 5V)n
  for (int i = 1; i <= 8; i++)
  {
        digitalWrite(cols[i - 1], HIGH);
        digitalWrite(rows[i - 1], LOW);
  }
}
/*Function to turn on a led on row r and column c*/
void LedON(int r, int c) 
{
  digitalWrite(cols[c - 1], LOW);
  digitalWrite(rows[r - 1], HIGH);
  //AllLedOFF();
}
/*Function to turn on the column c*/
void columnON(int c)
{
   for (int r=1; r<=8; r++)
       digitalWrite(rows[r - 1], HIGH);
   digitalWrite(cols[c-1], LOW);
  // AllLedOFF();
}
/*Print zero*/
void zero(){
    for (int i=3; i<7; i++){
         LedON(1,i);
         LedON(8,i);}
   LedON(2,4);
   LedON(2,5);
   LedON(7,4);
   LedON(7,5);
   for (int i=1; i<7; i++)
        digitalWrite(rows[i],HIGH);
   digitalWrite(cols[1],LOW);
   digitalWrite(cols[2],LOW);
   digitalWrite(cols[5],LOW);
   digitalWrite(cols[6],LOW);
}
/*Print one*/
void one(){
  columnON(4);
  columnON(5);
  LedON(2,3);
  for(int i=3;i<7;i++){
      LedON(7,i);
      LedON(8,i);}
}
/*Print two*/
void two(){
 for(int i=3; i<7; i++)
     LedON(1,i);
 LedON(3,2);
 LedON(3,3);
 LedON(4,7);
 for(int i=3; i<7; i++)
     LedON(i,10-i);
 for(int i=3; i<7; i++)
     LedON(i,9-i);
 for (int i=1; i<7; i++)
     digitalWrite(cols[i],LOW);
 digitalWrite(rows[1],HIGH);
 digitalWrite(rows[6],HIGH);
 digitalWrite(rows[7],HIGH);
}
/*Print three*/
void three(){
  for(int i=3;i<7;i++)
      LedON(i,6);  
  for(int i=2;i<5;i++)
      LedON(i,7);
  LedON(6,7);
  LedON(7,7);
  LedON(2,2);
  LedON(3,2);
  LedON(6,2);
  LedON(7,2);
  LedON(3,3);
  LedON(6,3);
  LedON(4,5);
  LedON(5,5);
  for(int i=2; i<6; i++)
      digitalWrite(cols[i],LOW);
  digitalWrite(rows[0],HIGH);
  digitalWrite(rows[1],HIGH);
  digitalWrite(rows[6],HIGH);
  digitalWrite(rows[7],HIGH);
}
/*Print four*/
void four(){
  for(int i=3;i<9;i++){
      LedON(6,i);
      LedON(7,i);}
  columnON(6);
  columnON(7);
  for(int i=2;i<6;i++){
      LedON(6-i,i);
      LedON(7-i,i);
      LedON(8-i,i);}
}
/*Print five*/
void five(){
  LedON(6,2);
  for(int i=2;i<8;i++){
      LedON(1,i);
      LedON(2,i);
      LedON(7,i);}
  for(int i=5;i<9;i++){
      LedON(i,6);
      LedON(i,7);}
  for(int i=3;i<8;i++){
      LedON(8,i);}  
  for(int i=4;i<7;i++){
      LedON(4,i);
      LedON(5,i);}  
  for(int i=2;i<4;i++){
      LedON(3,i);
      LedON(4,i);}     
}
/*Print six*/
void six(){
  for(int i=3;i<8;i++){
      LedON(1,i);
      LedON(2,i);} 
  for(int i=2;i<7;i++){
      LedON(4,i);
      LedON(5,i);}  
  for(int i=3;i<7;i++){
      LedON(7,i);
      LedON(8,i);}   
  for(int i=2;i<8;i++){
      LedON(i,2);
      LedON(i,3);}  
  for(int i=5;i<8;i++){
      LedON(i,6);
      LedON(i,7);}   
}
/*Print seven*/
void seven(){
  LedON(3,6);
  LedON(3,7);
  LedON(8,2);
  LedON(8,3);
  for(int i=2;i<8;i++){
      LedON(1,i);
      LedON(2,i);} 
  for(int i=4;i<8;i++){
      LedON(i,9-i);
      LedON(i,10-i);
      LedON(i,11-i);}   
}
/*Print eight*/
void eight(){
   for(int i=3;i<7;i++){
       LedON(1,i);
       LedON(2,i);
       LedON(4,i);
       LedON(7,i);
       LedON(8,i);} 
   for(int i=2;i<4;i++){
       LedON(2,i);
       LedON(3,i);
       LedON(5,i);
       LedON(6,i);
       LedON(7,i);} 
   for(int i=6;i<8;i++){
       LedON(2,i);
       LedON(3,i);
       LedON(5,i);
       LedON(6,i);
       LedON(7,i);} 
}
/*Print nine*/
void nine(){
   LedON(7,2);
   for(int i=3;i<7;i++){
       LedON(1,i);
       LedON(2,i);
       LedON(4,i);
       LedON(5,i);
       LedON(7,i);
       LedON(8,i);} 
  for(int i=2;i<4;i++){
      LedON(i,2);
      LedON(i,3);} 
  for(int i=2;i<8;i++){
      LedON(i,6);
      LedON(i,7);}  
}
/*setup*/
void setup() 
{
  for (int i = 1; i <= 16; i++)
        pinMode(pins[i], OUTPUT);//define the pins of matrix as output
}
void loop()
{
 AllLedOFF();
    LedON(4,3);
    delay(500);
    LedON(4,4);
    delay(500);
    LedON(4,5);
    delay(500);
    LedON(4,6);
    delay(500);
    LedON(5,3);
    delay(500);
    LedON(5,4);
    delay(500);
    LedON(5,5);
    delay(500);
    LedON(5,6);
    delay(500);
    LedON(1,1);
    delay(500);

              
}
