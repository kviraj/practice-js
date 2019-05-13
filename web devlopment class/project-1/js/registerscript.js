 function  register() {
    usernamevalidation();
    emailvalidation();
    passwordvalidation();
    
}

function usernamevalidation() {
    var username = document.getElementById("txtUserName").value;
    var pattern = /^([0-9]+[a-zA-Z]+|[a-zA-Z]+[0-9]+)[0-9a-zA-Z]*$/;

    if (username == "") {
        document.getElementById('txtUserName').style.border= "1px solid red";
        
        document.getElementById('symbolusername').style.border = "1px solid red"
        document.getElementById('symbolusername').style.backgroundColor = "red"
        document.getElementById('idOkayusername').style.display = "none"
        document.getElementById('idNotOkayusername').style.display = "block"
    }
   else if(pattern.test(username)) {
        document.getElementById('txtUserName').style.border = "1px solid green";
        document.getElementById('errorusername').innerHTML = '';

        document.getElementById('symbolusername').style.border = "1px solid green"
        document.getElementById('symbolusername').style.backgroundColor = "green"
        document.getElementById('idNotOkayusername').style.display = "none"
        document.getElementById('idOkayusername').style.display = "block"
    }
    else{
        document.getElementById('txtUserName').style.border = "1px solid red";
        document.getElementById('errorusername').innerHTML = 'user name must have 2 nos.';
    }
}

function emailvalidation() {
    var email = document.getElementById('Email').value;

    if (email == ""){
        document.getElementById('Email').style.border= "1px solid red";

        document.getElementById('symbolemail').style.border = "1px solid red"
        document.getElementById('symbolemail').style.backgroundColor = "red"
        document.getElementById('idOkayemail').style.display = "none"
        document.getElementById('idNotOkayemail').style.display = "block"
     }
     else{
     document.getElementById('Email').style.border = "1px solid green";

     document.getElementById('symbolemail').style.border = "1px solid green"
     document.getElementById('symbolemail').style.backgroundColor = "green"
     document.getElementById('idNotOkayemail').style.display = "none"
     document.getElementById('idOkayemail').style.display = "block"
 }
}

function passwordvalidation() {
    var Password = document.getElementById('Password').value;

    if (Password == "") {
        document.getElementById('Password').style.border= "1px solid red";

         document.getElementById('symbolpassword').style.border = "1px solid red"
        document.getElementById('symbolpassword').style.backgroundColor = "red"
        document.getElementById('idOkaypassword').style.display = "none"
        document.getElementById('idNotOkaypassword').style.display = "block"
     }
     else{
         document.getElementById('Password').style.border = "1px solid green";

         document.getElementById('symbolpassword').style.border = "1px solid green"
         document.getElementById('symbolpassword').style.backgroundColor = "green"
         document.getElementById('idNotOkaypassword').style.display = "none"
         document.getElementById('idOkaypassword').style.display = "block"
     }
}