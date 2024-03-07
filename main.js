const canvas = document.getElementById('canvas');
const ctx = canvas.getContext('2d');

let colorMap = '#303030';

canvas.width = 500;
canvas.height = 500;

ctx.fillStyle = colorMap;
ctx.fillRect(0, 0, canvas.width, canvas.height);

//parametros por defecto
function getCuadrado({color = 'white' , x = 0}){
  return {
    x: x,
    y: 0,
    width: 10,
    height: 30,
    color: color,
    draw () {
      ctx.fillStyle = this.color;
      ctx.fillRect(this.x, this.y, this.width, this.height);
    }
  }
}

const casa1 = getCuadrado({color: 'yellow', x: 10});
casa1.draw();

const casa2 = getCuadrado({color: 'green', x: canvas.width-20 })
casa2.draw();
