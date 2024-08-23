/*


//LAS CASAS DEBEN SER DEPARADAS POR UNA LONGITUD 'L' y EN LA ESQUINAS DEBEN SER L/2

1234567891234567891234567891234567891234567891234567891234567891234567891234567891234567891234567891234567891
1╔═════════════════════════════════════════════════════════════════════════════════════╗
2║    1234567890123456789                                                              ║
3║1234                   1234567890                   1234567890                   1234║
4║----  ╔═════════════╗  ----------  ╔═════════════╗  ----------  ╔═════════════╗  ----║
5║---- ╔╝             ╚╗ ---------- ╔╝             ╚╗ ---------- ╔╝             ╚╗ ----║
6║----╔╝  BIBLIOTECA   ╚╗----------╔╝     BANCO     ╚╗----------╔╝     TIENDA    ╚╗----║
7║----╚═╦═════════════╦═╝----------╚═╦═════════════╦═╝----------╚═╦═════════════╦═╝----║
8║----  ║    ╔═══╗    ║  ----------  ║    ╔═══╗    ║  ----------  ║    ╔═══╗    ║  ----║
9║----  ║    ║   ║    ║  ----------  ║    ║   ║    ║  ----------  ║    ║   ║    ║  ----║
0║----  ╚════╩═══╩════╝  ----------  ╚════╩═══╩════╝  ----------  ╚════╩═══╩════╝  ----║
1║----       █████       ----------       █████       ----------       █████       ----║
2╝----       █████       ----------       █████       ----------       █████       ----╚
3
4
5
6╗                                                                                     ╔
7║                                                                                     ║
8║     █████                                                                           ║
9║     █████                                                                           ║
0║    COMPRAS                                                                          ║
1╚═════════════════════════════════════════════════════════════════════════════════════╝
1234567891234567891234567891234567891234567891234567891234567891234567891234567891234567891234567891234567891

╔═════════════════════════════════════════════════════════════════════════════════════╗
║                                                                                     ║
║                                                                                     ║
║----  ╔═════════════╗  ----------  ╔═════════════╗  ----------  ╔═════════════╗  ----║
║---- ╔╝             ╚╗ ---------- ╔╝             ╚╗ ---------- ╔╝             ╚╗ ----║
║----╔╝  BIBLIOTECA   ╚╗----------╔╝     BANCO     ╚╗----------╔╝     TIENDA    ╚╗----║
║----╚═╦═════════════╦═╝----------╚═╦═════════════╦═╝----------╚═╦═════════════╦═╝----║
║----  ║    ╔═══╗    ║  ----------  ║    ╔═══╗    ║  ----------  ║    ╔═══╗    ║  ----║
║----  ║    ║   ║    ║  ----------  ║    ║   ║    ║  ----------  ║    ║   ║    ║  ----║
║----  ╚════╩═══╩════╝  ----------  ╚════╩═══╩════╝  ----------  ╚════╩═══╩════╝  ----║
║----       █████       ----------       █████       ----------       █████       ----║
╝----       █████       ----------       █████       ----------       █████       ----╚


╗                                                                                     ╔
║                                                                                     ║
║     █████                                                                           ║
║     █████                                                                           ║
║    COMPRAS                                                    pulse x para ingresar ║
╚═════════════════════════════════════════════════════════════════════════════════════╝
01234567890123456789
1  ╔═════════════╗  
2 ╔╝             ╚╗ 
3╔╝  BIBLIOTECA   ╚╗
4╚═╦═════════════╦═╝
5  ║    ╔═══╗    ║  
6  ║    ║   ║    ║  
7  ╚════╩═══╩════╝  
*/
char estructura[7][19] = 
{
  {46,46,201,205,205,205,205,205,205,205,205,205,205,205,205,205,187,46,46},  
  {46,201,188,46,46,46,46,46,46,46,46,46,46,46,46,46,200,187,46},
  {201,188,46,46,'B','I','B','L','I','O','T','E','C','A',46,46,46,200,187},
  {200,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,188},
  {46,46,186,46,46,46,46,201,205,205,205,187,46,46,46,46,186,46,46},
  {46,46,186,46,46,46,46,186,46,46,46,186,46,46,46,46,186,46,46},
  {46,46,200,205,205,205,205,46,205,205,205,46,205,205,205,205,188,46,46},
};
unsigned char estructuraVacia[7][19] =	
  {
    {46,46,201,205,205,205,205,205,205,205,205,205,205,205,205,205,187,46,46},
    {46,201,188,255,255,255,255,255,255,255,255,255,255,255,255,255,200,187,46},
    {201,188,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,200,187},
    {200,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,188},
    {46,46,186,46,46,46,46,201,205,205,205,187,46,46,46,46,186,46,46},
    {46,46,186,46,46,46,46,186,46,46,46,186,46,46,46,46,186,46,46},
    {46,46,200,205,205,205,205,202,205,205,205,202,205,205,205,205,188,46,46},
	};
// char estructuraTest[7][19] = 
// {
//   {46,46,201,205,205,205,205,205,205,205,205,205,205,205,205,205,187,46,46},  
//   {46,201,188," "," "," "," "," "," "," "," "," "," "," "," "," ",200,187,46},
//   {201,188," "," ",'B','I','B','L','I','O','T','E','C','A'," "," "," ",200,187},
//   {200,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,188},
//   {46,46,186,46,46,46,46,201,205,205,205,187,46,46,46,46,186,46,46},
//   {46,46,186,46,46,46,46,186,46,46,46,186,46,46,46,46,186,46,46},
//   {46,46,200,205,205,205,205,46,205,205,205,46,205,205,205,205,188,46,46},
// };
/*

DISEÑO DE LOS NPC

.name_oficio
.  0123
.  1 O
.  2/|\
.  3/ \
.   ███

PERSONAJE
.   
.  ┌──┐
.  │tu│
.  └──┘
.
219 = █;

197 = │
196 = ─
218 = ┌
192 = └
191 = ┐
217 = ┘

196 = ─
95  = _
238 = ¯

203 = ╦
202 = ╩
201 = ╔
200 = ╚
186 = ║
205 = ═
187 = ╗
188 = ╝

*/