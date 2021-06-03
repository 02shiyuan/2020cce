function setup(){
  createCanvas(400,200);
}
function draw(){
  let s=second();
  if(s%2==0){
    background(#94DEF0);
  }else{
    background(#B6EDFA);
  }
}
