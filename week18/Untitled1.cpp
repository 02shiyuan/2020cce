import processing.video.*;//���F���T
Capture cam;//global�ܼ�
void setup(){//�]�w �u���@��
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
