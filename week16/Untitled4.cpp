void setup(){//�]�w�u���@��
  size(400,200);
}
float start=0,v;//���઺�t��
void mousePressed(){
  v=random(1);
}
void draw(){//�e�A�C��60��
  background(230,207,230);
  if(v>0.001){//�t�׫ܺC�� �N���n�A��ʤF
    start += v;//��m �t�� �[�t��(��m�|�[�W�t��)
    v *= 0.99;//�����O �|���t���ܺC ��m�t�ץ[�t��(�t�׷|�[�W�[�t��)
  }
  fill(255,179,230);
  text(start,200,150);
  text(v,200,170);
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(116,0,161);
    if(i%3==1) fill(147,112,219);
    if(i%3==2) fill(148,0,211);
    if(i==0) fill(217,77,255);
    arc(100,100,180,180,shift+0+start,shift+PI/12+start);
  }  //   �Ϥ�  �e ��    �}�l        ����
}
