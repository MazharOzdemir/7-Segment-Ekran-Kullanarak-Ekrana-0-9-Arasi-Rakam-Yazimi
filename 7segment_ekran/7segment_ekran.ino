// 7 segment ekran ve iki puton yardımı ile 0-9 arası sayıların ekran üzerinde gösterimini sağlayacağız.
// Altta örnek bir 7 segment ekran çizdim ve çıkış harflerini belirttim.

                      
               A: 2
               ____
        F:7   |    | B:3
              |----|  
        E:6   |____| C:4

               D:5 

int a= 2;
int b= 3;
int c= 4;
int d= 5;
int e= 6;
int f= 7;
int g= 8;
int buton1 = 9;
int buton2= 10;
int sayac=0;

//7 segment ekranımız üzerinde bulunan çıkışlara digital pin deger atamalarını gerçekleştiriyoruz.
// Buton1 ve Buton2 digital pin atamalarımızı yapıyoruz.
// sayac degiskenimizi tanımlayıp 0'a esitliyoruz.


void setup()
  
{
  Serial.begin(9600);

  //Seri haberleşmemizi başlatıyoruz.
  
  for(int i=2;i<9;i++){
   pinMode(i,OUTPUT);
  }
  pinMode(buton1,INPUT);
  pinMode(buton2,INPUT); 	
}

//For döngüsü kullanarak 7 segment ekran çıkışlarımızı OUTPUT olarak belirliyoruz.
//Butonlarımızı INPUT olarak belirliyoruz. Veri girişi yapacakları için INPUT değerini aldılar.

void loop()
{
   Serial.println(sayac);

   //Ekrana sayac degerimizi yazdırıyoruz.
  
  if(digitalRead(buton1)==1){
  sayac++;
  }
  
//Buton1'e basıldığında sayacımızı 1 artacak şekilde yazdırıyoruz.

  if(digitalRead(buton2)==1){
  sayac--;
  }

  //Buton2'ye basıldığında ise sayac değerimiz 1 azalacak.
  
  if(sayac>9){
    sayac=0; }
  if(sayac<0){
  sayac =9; }

  //Ekranımız 0 ile 9 arası değerleri yazdırabileceği için if yapısı ile sayacımızın 0 ve 9 sayısını aşmamasını sağlıyoruz.
  
  switch(sayac){

    //Switch yapısı ile sayacın gireceği sayının direk o kod bloğuna yönlendirilmesini sağlıyoruz.
    //Case yapılarını girilen sayının şeklini oluşturacak biçimde HIGH veya LOW değerlerini belirliyoruz.
  
  case0:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    break;
  
  
  case1:
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break;
  
case2:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    break;
  
  case3:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    break;
  
  case4:
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break;
  
  case5:
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break;
  
  case6:
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break;
  
  case7:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break;
    
  case8:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break;
    
  case9:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break;
  
  
  }
  delay(250);
  
}