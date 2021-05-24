void setup(){
    size(1024,400);
}
void draw(){
    background(230,207,230);
    int s=second();
    int m=minute();
    int h=hour();
    textSize(80);
    text(h+":"+m+":"+s,100,200);
}
