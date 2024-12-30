var a = parseInt(prompt("Enter a value of a: "));
var b = parseInt(prompt("Enter a value of b: "));
var c = parseInt(prompt("Enter a value of c: "));

if(a>b & a>c){
    document.write(a +" is largest than " + b + " & " + c);
}
else if(b>a & b>c){
    document.write(b +" is largest than " + a + " & " + c);
}else{
    document.write(c +" is largest than " + a + " & " + b);
}