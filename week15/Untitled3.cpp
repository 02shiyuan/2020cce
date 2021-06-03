import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player=new SoundFile(this,"bell.mp3");
}
void draw(){
  background(230,207,230);
}
void mousePressed(){
  if(player.isPlaying() ){
    player.stop();
  }else{
    player.play();
  }
}
