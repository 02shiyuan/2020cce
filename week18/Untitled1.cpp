import processing.video.*;//為了視訊
Capture cam;//global變數
void setup(){//設定 只做一次
  size(640,480);
  println(Capture.list());
  cam=new Capture(this,"HD WemCam");
  cam.start();

}
void draw(){
  if(cam.available())cam.read();{
    cam.read();

  }
  set(0,0,cam);
}
