function setup() {
    createCanvas(400,200);
}


function draw() {
  let s=second();
  if(s%2==0){
    background(230,153,152);
  }else{
    background(230,207,230);
  }
}
