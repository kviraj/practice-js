function msgWebCall() {
    var userName = document.getElementById('idusername').value;
    var password = document.getElementById('idpassword').value;
    var role = 'Admin'
    var login = {
        credentials: userName,
        password: password,
        role: role
    }
    console.log('login', login)
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            document.getElementById('idmessage').innerHTML = this.responseText;
        }
    };
    xhttp.open("POST", 'http://localhost:5757/192.168.0.16/api/users/login', true);
    xhttp.setRequestHeader('Content-Type', 'application/json');
    xhttp.send(JSON.stringify(login));
    
}
