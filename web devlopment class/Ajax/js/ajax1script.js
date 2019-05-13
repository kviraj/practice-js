function loadBackEnd() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {

            var Joke = JSON.parse(xhttp.response);
             console.log('Joke', Joke.value.joke);

            document.getElementById('Joke').innerHTML = Joke.value.joke
        }
    };
    xhttp.open("GET", 'http://api.icndb.com/jokes/random', true);
    xhttp.send();
}
