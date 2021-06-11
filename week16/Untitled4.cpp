void setup(){//設定只做一次
  size(400,200);
}
float start=0,v;//旋轉的速度
void mousePressed(){
  v=random(1);
}
void draw(){//畫，每秒60次
  background(230,207,230);
  if(v>0.001){//速度很慢時 就不要再轉動了
    start += v;//位置 速度 加速度(位置會加上速度)
    v *= 0.99;//摩擦力 會讓速度變慢 位置速度加速度(速度會加上加速度)
  }
  fill(255,179,230);
  text(start,200,150);
  text(v,200,170);
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(116,0,161);
    if(i%3==1) fill(147,112,219);
    if(i%3==2) fill(148,0,211);
    if(i==0) fill(217,77,255);
    arc(100,100,180,180,shift+0+start,shift+PI/12+start);
  }  //   圖心  寬 高    開始        結束
}
