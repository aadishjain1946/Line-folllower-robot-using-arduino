int mla=1,mlb=2,mra=3,mrb=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(mla,OUTPUT);
  pinMode(mlb,OUTPUT);
  pinMode(mra,OUTPUT);
  pinMode(mrb,OUTPUT);
}
void loop() 
{
  int L,M,R;
  L=analogRead(A0);
  M=analogRead(A1);
  R=analogRead(A2);
  if(L<=100){
    if(M<=100){
      if(R<=100){
        digitalWrite(mla, LOW);
        digitalWrite(mlb, LOW);
        digitalWrite(mra, LOW);
        digitalWrite(mrb, LOW);     
      }
      else if(R>=500){
        digitalWrite(mla, LOW);
  digitalWrite(mlb, HIGH);
  digitalWrite(mra, HIGH);
  digitalWrite(mrb, LOW);
      }
    }
    else if(M>=500){
      if(R<=100){
        digitalWrite(mla, LOW);
  digitalWrite(mlb, LOW);
  digitalWrite(mra, LOW);
  digitalWrite(mrb, LOW);
      }
      else if(R>=500){
        digitalWrite(mla, LOW);
  digitalWrite(mlb, HIGH);
  digitalWrite(mra, HIGH);
  digitalWrite(mrb, LOW);
      }
    }
    
  }
  else if(L>=500){
    if(M<=100){
      if(R<=100){
        digitalWrite(mla, HIGH);
  digitalWrite(mlb, LOW);
  digitalWrite(mra, LOW);
  digitalWrite(mrb, HIGH);
      }
      else if(R>=500){
        digitalWrite(mla, HIGH);
  digitalWrite(mlb, LOW);
  digitalWrite(mra, HIGH);
  digitalWrite(mrb, LOW);
      }
    }
    else if(M>=500){
      if(R<=100){
        digitalWrite(mla, HIGH);
  digitalWrite(mlb, LOW);
  digitalWrite(mra, LOW);
  digitalWrite(mrb, HIGH);
      }
      else if(R>=500){
        digitalWrite(mla, HIGH);
  digitalWrite(mlb, LOW);
  digitalWrite(mra, HIGH);
  digitalWrite(mrb, LOW);
      }
    }
  }
  /*aml=!M&&R||!L&&R;
  bml=L&&!R;
  arl=L&&!M||L&&!R;
  brl=!L&&R;
  if(aml==1)
  digitalWrite(mla, HIGH);
  if(aml==0)
  digitalWrite(mla, LOW);
  if(bml==1)
  digitalWrite(mlb, HIGH);
  if(bml==0)
  digitalWrite(mlb, LOW);
  if(arl==1)
  digitalWrite(mra, HIGH);
  if(arl==0)
  digitalWrite(mra, LOW);
  if(brl==1)
  digitalWrite(mrb, HIGH);
  if(brl==0)
  digitalWrite(mrb, LOW);*/
}

