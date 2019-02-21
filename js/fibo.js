var a=0
var b=1
var result=0
console.log(`Fibonacci series is `+result)
for(i=1;i<=10;i++)
{
    console.log(``+a)

    result=a+b

    a=b;
    b=result
}

function init()
{
    var h3tags=document.getElementsByTagName("h3");
   // console.log(h3tags);
    h3tags[0].onclick=changeColor; 
}

function changeColor()
{
    this.innerHtml="Click Again";
    var randomcolor='#'+Math.floor(Math.random()*16777215).toString(16);
    this.style.color=randomcolor;
    
}
onload=init;

function toggle()
{
    var img=document.getElementById("ironman1");
    var isImgVisible=img.style.visibility !="visible";
    img.style.visibility=isImgVisible ?"visible":"hidden";
}