var myGlobal=10;
function first()
{
    oopsGlobal=5;
}

function second()
{
    var output="";
    if(typeof myGlobal !="undefined")
    {
        output +="myGlobal:" +myGlobal;
    }
    
        if(typeof oopsGlobal !="undefined")
    {    
        output +="oopsGlobal:" +oopsGlobal;
    }

console.log(output);
}
first();
second();   