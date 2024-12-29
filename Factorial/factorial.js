var num = parseInt(prompt("Enter a Number to find Factorial: "));
var fact = 1;
if(num > 0){
    for(let i = 1; i <= num; i++){
        fact = fact*i;
    }
    document.write(`Factorial of ${num} is ${fact}`);
}else{
    document.write("Please Enter a Positive Number");
}