nt ans=0;
void setup(){
  size(300,300);
  float ans=random(60);//亂數 <60的浮點數
  textSize(30);
  text(ans,20,30);//畫出ans
}
void draw(){
  background(#E0AEDD);
  text(ans,20,30);
}
void mousePressed(){//按下去就互動一次
  ans=(int)random(60);//浮點數不能直接變整數

}
