var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valoresRecebidos = input.split("\n");

var a = parseInt(valoresRecebidos.shift());
var b = parseInt(valoresRecebidos.shift());

var resultado = a + b;

console.log("SOMA = " + resultado);