void setup(){
    size(1024,400);
}
void draw(){
    if(mousePressed)background(255,128,153);
    else background(230,207,230);
    textSize(30);
    text("Now a is:"+a,450,200);
}
int a=0;
void mousePressed(){
    a++;
}
