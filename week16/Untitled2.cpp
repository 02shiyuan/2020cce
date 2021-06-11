void draw(){//畫，每秒60次
  background(230,207,230);
  fill(255);
  ellipse(100,100,180,180);
       // 圓心  寬  高
  fill(255,179,230);
  float start=mouseX/50.0;
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(116,0,161);
    if(i%3==1) fill(147,112,219);
    if(i%3==2) fill(148,0,211);
    if(i==0) fill(217,77,255);
    arc(100,100,180,180,shift+0+start,shift+PI/12+start);
  }  //   圖心  寬 高    開始        結束
}

