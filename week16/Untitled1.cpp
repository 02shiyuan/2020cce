void setup(){//�]�w�u���@��
  size(400,200);
}
void draw(){//�e�A�C��60��
  background(230,207,230);
  fill(255);
  ellipse(50,50,80,80);
       // ���  �e  ��
  fill(255,179,230);
  float start=mouseX/50.0;
  textSize(40);
  text(start,100,100);
  arc(50,50,80,80,0+start,0.1+start);//�e�X �꩷
}//   �Ϥ�  �e ��    �}�l        ����

