var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valoresRecebidos = input.split("\n");

var primeiroValor = parseFloat(valoresRecebidos.shift());
var segundoValor = parseFloat(valoresRecebidos.shift());
var terceiroValor = parseFloat(valoresRecebidos.shift());

var media = (primeiroValor * 2 + segundoValor * 3 + terceiroValor * 5) / 10.0;

console.log("MEDIA = " + media.toFixed(1));