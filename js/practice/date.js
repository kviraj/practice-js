var currentDate=new Date()
console.log(currentDate);
var day,month,year;

function caldate(){
    day=currentDate.getDate();
    month=currentDate.getMonth()+1;
    year=currentDate.getFullYear();
}
caldate();



console.log(day,month,year)


function viraj(){
    var birthdate=document.getElementById("dt").value;
    console.log(birthdate);

    var pint=parseInt(birthdate.substr(6,4));
    console.log(pint);

    var ans=year-pint;
    console.log(ans);

    document.getElementById("age").value=ans;

}

