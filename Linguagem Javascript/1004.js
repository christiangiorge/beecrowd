var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valoresRecebidos = input.split("\n");
var primeiroValor = parseInt(valoresRecebidos.shift());
var segundoValor = parseInt(valoresRecebidos.shift());

var resultado = primeiroValor * segundoValor;

console.log("PROD = " + resultado);