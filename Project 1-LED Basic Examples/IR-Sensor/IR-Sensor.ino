int ir = D0;
int LED = D1;
void setup () 
{
  pinMode(ir, OUTPUT);
  pinMode(LED, INPUT);
}
void loop ()
{
  if(digitalRead(ir)==1)
  {
     digitalWrite(LED, HIGH);
  }
else
{
  digitalWrite(LED, LOW);
}
  }
  
