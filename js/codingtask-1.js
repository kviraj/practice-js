

var John=80;
var Nick=5;
var pass=51;
if(John>=pass && Nick>=pass)
{
    console.log("Students pass the exam");
}
else if(John>=pass || Nick>=pass){
    console.log("One of the student pass exam");
    
    if(John>Nick){
        console.log('and it is John' + John + 'points');
        
    }else{
        console.log('and it is Nick'+Nick+'points');
        
    }
}
else{
    console.log("Both Students failed the exam");
    
}
