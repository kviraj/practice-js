let a=0;
let b=0;
let operand="";
function display(val){
    if(operand=="")
    {
        if(val=="."){
            a=document.getElementById("result").value;
            
            document.getElementById("result").value=a+".";
        }
        else{
        a=document.getElementById("result").value;
    
        a=(a*10)+val;
        document.getElementById("result").value=a;
        }
    }
    else{
        if(val=="."){
            b=document.getElementById("result").value;
            document.getElementById("result").value=b+".";

        }
        else{
            b=document.getElementById("result").value;

    b=(b*10)+val;
    document.getElementById("result").value=b;
        }
    
    }


        // console.log (a);
}

function operands(val){
    operand=val;
    document.getElementById("result").value="";
    console.log(a);
    console.log(operand);
}

function solve() {
    if(operand=="+"){
      var ans=  a+b;
        document.getElementById("result").value=ans;
    }
    else if(operand=="-"){
        var ans=  a-b;
        document.getElementById("result").value=ans;
    }
     else if(operand=="*"){
        var ans=  a*b;
        document.getElementById("result").value=ans;
    }
     else if(operand=="/"){
        var ans=  a/b;
        document.getElementById("result").value=ans;
    }
 } 
 function clearEverything(){
      
     document.getElementById("result").value="";
     a=0;
     b=0;
     operand="";
 }