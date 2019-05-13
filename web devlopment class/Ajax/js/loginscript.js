function loginwebcall() {
    var userName = document.getElementById('userId').value;
    var password = document.getElementById('passId').value;
    var role = 'Admin'
    var login = {
        credentials: userName,
        password: password,
        role: role
    }
    console.log('login', login)
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4) {
            if (this.status == 200) {
                document.getElementById("msgId").innerHTML = JSON.parse(xhttp.response).msg

            }
            if (this.status == 400) {
                document.getElementById("msgId").innerHTML = JSON.parse(xhttp.response).msg
            }

        }
    };
    xhttp.open("POST", 'http://192.168.0.16:5757/api/users/login', true);
    xhttp.setRequestHeader('Content-Type', 'application/json');
    xhttp.send(JSON.stringify(login));
}