void setup(){//設定只做一次
  size(400,200);
}
void draw(){//畫，每秒60次
  background(230,207,230);
  fill(255);
  ellipse(50,50,80,80);
       // 圓心  寬  高
  fill(255,179,230);
  float start=mouseX/50.0;
  textSize(40);
  text(start,100,100);
  arc(50,50,80,80,0+start,0.1+start);//畫出 圓弧
}//   圖心  寬 高    開始        結束

