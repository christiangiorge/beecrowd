var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valoresRecebidos = input.split("\n");

var primeiroValor = parseFloat(valoresRecebidos.shift());
var segundoValor = parseFloat(valoresRecebidos.shift());

var resultado = (primeiroValor * 3.5 + segundoValor * 7.5) / 11.0;

console.log("MEDIA = " + resultado.toFixed(5));