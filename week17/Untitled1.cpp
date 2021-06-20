void setup(){//設定只做一次
  size(400,200);
  textSize(40);
}
String line="hello";//字串
char c='9';
void draw(){//每秒60次
  background(230,207,230);
  text(line+c+100,100,100);//可以將字串line畫出來
  text("World:"+key,100,150);//也可以把字串畫出來
}
