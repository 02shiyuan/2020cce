int []a=new int[47];//Java���}�C
//int []a={1,2,3,4,5,6,7,8,9....45,46};
void setup(){
  size(500,200);
  textSize(30);
  for(int i=0;i<47;i++) a[i]=i;
  //��a[i]���}�C�� �n�������������Ʀr
  for(int i=0;i<1000;i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//�@�� ���~�n�P �����D�o�����X ���U�A���X��
}
int N=0;
void draw(){
  background(#ADABE8);
  textAlign(CENTER,CENTER);
  for(int i=0;i<N;i++){
    fill(255);ellipse(i*80+40,100,55,55);
    fill(0);text(a[i],i*80+40,100);
  }
}
void mousePressed(){
  N++;
}
