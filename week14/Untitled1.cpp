nt ans=0;
void setup(){
  size(300,300);
  float ans=random(60);//�ü� <60���B�I��
  textSize(30);
  text(ans,20,30);//�e�Xans
}
void draw(){
  background(#E0AEDD);
  text(ans,20,30);
}
void mousePressed(){//���U�h�N���ʤ@��
  ans=(int)random(60);//�B�I�Ƥ��ઽ���ܾ��

}
