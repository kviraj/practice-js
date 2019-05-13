function myfuction(){
    var yourname=document.getElementById("yourname").value;
    var email=document.getElementById("email").value;
    var message=document.getElementById("message").value;
    var phone=document.getElementById("phone").value;
    document.getElementById('result').innerHTML= yourname + email + message + phone;

}