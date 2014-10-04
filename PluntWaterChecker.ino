void setup()
{
  Serial.begin(9600);
  pinMode( 2 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
}

void loop()
{
  Serial.print("Moisture :");
  Serial.print(analogRead(0));
  Serial.println();
  delay( 100 );
  if (( ( analogRead(0) ) < ( 300 ) ))
  {
    digitalWrite( 2 , LOW );
    digitalWrite( 3 , HIGH );
    digitalWrite( 4 , HIGH );
  }
  else
  {
    if (( ( analogRead(0) ) < ( 500 ) ))
    {
      digitalWrite( 2 , HIGH );
      digitalWrite( 3 , LOW );
      digitalWrite( 4 , HIGH );
    }
    else
    {
      digitalWrite( 2 , HIGH );
      digitalWrite( 3 , HIGH );
      digitalWrite( 4 , LOW );
    }
  }
}


