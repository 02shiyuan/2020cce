void setup(){
  size(400,200);
  textSize(40);
}
char c='9';
String ans="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//JAVA的字串
int win=0;//0:還沒win，1:win
void draw(){
  background(230,207,230);
  text("Press:"+c,100,100);
  text("You  :"+key,100,150);
  if(c==key)win=1;
  else win=0;

  if(win==1){
    text("You Win!",100,50);
    int i=int(random(26,+26));//亂數))//亂數0~52之間挑一個整數i
    c=ans.charAt(i);//找出字串ans的第i個字母
  }
}
