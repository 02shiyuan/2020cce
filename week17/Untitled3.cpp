void setup(){
  size(400,200);
  textSize(40);
}
int x=100,y=100;
void draw(){
  background(230,207,230);
  rect(x,y,50,50);//�e���
}//Q=�ݨD�A����B�k��

void keyPressed(){
  if(keyCode==LEFT)x-=10;
  if(keyCode==RIGHT)x+=10;
}
