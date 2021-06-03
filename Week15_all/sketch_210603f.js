function setup(){//設定只做一次
  createCanvas(400,200);
}
function draw(){//畫圖
  let s = second();
  if(s%2==0){
    background(88,137,203);
  }else{
    background(129,209,132);
  }
}
