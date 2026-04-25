setInterval(function(){

let bpm = Math.floor(Math.random() * 20) + 70;
let spo2 = Math.floor(Math.random() * 3) + 97;
let temp = (36 + Math.random()).toFixed(1);

document.getElementById("bpm").innerHTML = bpm + " BPM";
document.getElementById("spo2").innerHTML = spo2 + "%";
document.getElementById("temp").innerHTML = temp + " °C";
if(bpm > 100 || spo2 < 95 || temp > 37.5){
    document.getElementById("status").innerHTML = "Critical";
    document.getElementById("status").style.color = "red";
    document.body.style.background = "#ffe5e5";
}
else{
    document.getElementById("status").innerHTML = "Stable";
    document.getElementById("status").style.color = "green";
    document.body.style.background = "#f4f6f9";
}

},2000);