#define botao 13
#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
int leitura_botao = 0;
int contador = 0;

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  leitura_botao = digitalRead (botao);
  Serial.println(leitura_botao);
  delay(200);
  
if(leitura_botao==0){
    contador = contador + 1;
    Serial.print("botao pressionado");
    Serial.print(contador);
    Serial.println("vezes");
  }

  switch (contador){
    case 1: //numero 1
          digitalWrite (a, LOW);
          digitalWrite (b, LOW);
          digitalWrite (c, LOW);
          digitalWrite (d, LOW);
          digitalWrite (e, HIGH);
          digitalWrite (f, HIGH);
          digitalWrite (g, LOW);
          
          break;
    case 2: //numero 2
          digitalWrite (a, HIGH);
          digitalWrite (b, HIGH);
          digitalWrite (c, LOW);
          digitalWrite (d, HIGH);
          digitalWrite (e, HIGH);
          digitalWrite (f, LOW);
          digitalWrite (g, HIGH);
          break;
    case 3: //numero 3
          digitalWrite (a, HIGH);
          digitalWrite (b, HIGH);
          digitalWrite (c, HIGH);
          digitalWrite (d, HIGH);
          digitalWrite (e, LOW);
          digitalWrite (f, LOW);
          digitalWrite (g, HIGH);
          break;
    case 4: //numero 4
          digitalWrite (a, LOW);
          digitalWrite (b, HIGH);
          digitalWrite (c, HIGH);
          digitalWrite (d, LOW);
          digitalWrite (e, LOW);
          digitalWrite (f, HIGH);
          digitalWrite (g, HIGH);
          break;
    case 5: // numero 5
          digitalWrite (a, HIGH);
          digitalWrite (b, LOW);
          digitalWrite (c, HIGH);
          digitalWrite (d, HIGH);
          digitalWrite (e, LOW);
          digitalWrite (f, HIGH);
          digitalWrite (g, HIGH);
          break;
    case 6: // numero 6
          digitalWrite (a, HIGH);
          digitalWrite (b, LOW);
          digitalWrite (c, HIGH);
          digitalWrite (d, HIGH);
          digitalWrite (e, HIGH);
          digitalWrite (f, HIGH);
          digitalWrite (g, HIGH);
          break;
    case 7: //numero 7
          digitalWrite (a, HIGH);
          digitalWrite (b, HIGH);
          digitalWrite (c, HIGH);
          digitalWrite (d, LOW);
          digitalWrite (e, LOW);
          digitalWrite (f, LOW);
          digitalWrite (g, LOW);
          break;
    case 8: //numero 8
          digitalWrite (a, HIGH);
          digitalWrite (b, HIGH);
          digitalWrite (c, HIGH);
          digitalWrite (d, HIGH);
          digitalWrite (e, HIGH);
          digitalWrite (f, HIGH);
          digitalWrite (g, HIGH);
          break;
    case 9: //numero 9
          digitalWrite (a, HIGH);
          digitalWrite (b, HIGH);
          digitalWrite (c, HIGH);
          digitalWrite (d, HIGH);
          digitalWrite (e, LOW);
          digitalWrite (f, HIGH);
          digitalWrite (g, HIGH);
          break;
    default: //numero 0
          contador=0;
          digitalWrite (a, HIGH);
          digitalWrite (b, HIGH);
          digitalWrite (c, HIGH);
          digitalWrite (d, HIGH);
          digitalWrite (e, HIGH);
          digitalWrite (f, HIGH);
          digitalWrite (g, LOW);
          break;
    }
}
