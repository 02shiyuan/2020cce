void setup(){
  size(400,200);
  textSize(40);
}
char c='9';
String ans="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//JAVA���r��
int win=0;//0:�٨Swin�A1:win
void draw(){
  background(230,207,230);
  text("Press:"+c,100,100);
  text("You  :"+key,100,150);
  if(c==key)win=1;
  else win=0;

  if(win==1){
    text("You Win!",100,50);
    int i=int(random(26,+26));//�ü�))//�ü�0~52�����D�@�Ӿ��i
    c=ans.charAt(i);//��X�r��ans����i�Ӧr��
  }
}
