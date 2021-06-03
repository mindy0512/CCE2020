## Week15 Processing基本程式_網頁模式

先必須從右上 JAVA下拉選項|Add Mode  找尋p5.js Mode(Javascript程式語言)
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W15_09166080_6.png)

想將JAVA轉成Javascript  網址：http://faculty.purchase.edu/joseph.mckay/p5jsconverter.html
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W15_09166080_8.png)

```Javascript
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
```

有將此程式檔案放到githun資料夾為 W15_p5.js Mode
![](https://github.com/mindy0512/CCE2020/blob/gh-pages/image/W15_09166080_7.png)
