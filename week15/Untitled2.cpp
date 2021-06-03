import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//¤j¦r
  player=new SoundFile(this,"tada.mp3");
}
void draw(){//¨C¬í60¦¸
  int s=second();
  background(230,207,230);
  text(10-s%11,100,100);
  if(10-s%11==0 && !player.isPlaying()){
    player.play();
  }
}

