var input = require("fs").readFileSync("../stdin","utf8");
var lines = input.split("\n");

for(var i = 0; i < lines.length; i++){
    const valor = parseFloat(lines[i]).toFixed(2);
    if (valor <= 2000.00){
        console.log("Isento")
    }else if (valor <= 3000.00){
        impostoOitoPorcento(valor)
    }else if (valor <= 4500.00){
        impostoDezoitoPorcento(valor)
    }else{
        impostoVinteOitoPorcento(valor)
    }
}
function impostoOitoPorcento(valor){
    let valorNaoIsento = valor - 2000;
    let valorOitoPorcento = valorNaoIsento * 0.08;
    console.log("R$", valorOitoPorcento.toFixed(2));
}
function impostoDezoitoPorcento(valor){
    let valorOitoPorcento = 1000 * 0.08;
    let valorDezoitoPorcento = (valor - 3000) * 0.18;
    let total = valorOitoPorcento + valorDezoitoPorcento
    console.log("R$", total.toFixed(2));   
}
function impostoVinteOitoPorcento(valor){
    let valorOitoPorcento = 1000 * 0.08;
    let valorDezoitoPorcento =  1500 * 0.18;
    let valorVinteOitoPorcento = (valor - 4500) * 0.28;
    let total = valorOitoPorcento + valorDezoitoPorcento + valorVinteOitoPorcento;
    console.log("R$", total.toFixed(2));   
}