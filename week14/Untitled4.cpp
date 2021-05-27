int []a=new int[47];//Java的陣列
//int []a={1,2,3,4,5,6,7,8,9....45,46};
void setup(){
  size(500,200);
  textSize(30);
  for(int i=0;i<47;i++) a[i]=i;
  //讓a[i]的陣列裡 要先放整齊對應的數字
  for(int i=0;i<1000;i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊 先洗好牌 先知道得獎號碼 等下再掉出來
}
int N=0,rolling=0;
void draw(){
  background(#ADABE8);
  textAlign(CENTER,CENTER);
  for(int i=0;i<N;i++){
    int x=i*80+40;
    if(i==N-1 && rolling>0){
      x+=rolling;
      rolling-=3;
    }
    fill(255);ellipse(x,100,55,55);
    fill(128);text(a[i],x+2,100+2);
    fill(0);text(a[i],x,100);
  }
}
void mousePressed(){
  rolling=500;
  N++;
}
