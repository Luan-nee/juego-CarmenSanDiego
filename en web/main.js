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
    direction: 'left',
    draw () {
      if(this.direction === 'left'){
        this.x--;
      }
      if(this.direction === 'right'){
        this.x++;
      }

      if(this.x == canvas.width){
        this.direction = 'left'; 
      }
      if(this.x == 0){
        this.direction = 'right';
      }

      ctx.fillStyle = this.color;
      ctx.fillRect(this.x, this.y, this.width, this.height);
    }
  }
}

const casa1 = getCuadrado({color: 'yellow', x: 10});
casa1.draw();

const casa2 = getCuadrado({color: 'green', x: canvas.width-20 });
casa2.draw();

const ball = getCuadrado({color: 'red', x: canvas.width/2});

function frame(){
  ctx.clearRect(0,0,canvas.width, canvas.height);
  ball.draw();
  console.log('dibujando');
  requestAnimationFrame(frame);
}

//pasale una función que se repirá constantemente
requestAnimationFrame(frame);