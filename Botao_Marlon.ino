void setup()
{
  pinMode(8, INPUT); // entrada do botão do LED vermelho
  pinMode(9, INPUT); // entrada do botão do LED verde
  pinMode(12, OUTPUT); // saida do LED verde
  pinMode(13, OUTPUT); // saida do LED vermelho
}

void loop()
{
  if(digitalRead(9) == true){
    digitalWrite(12, HIGH);
  }else{
    digitalWrite(12, LOW);
  }

  if(digitalRead(8)== true){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
}
