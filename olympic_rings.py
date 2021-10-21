import turtle as p

def draw_circle(x,y,c='red'):
    p.pu()
    p.goto(x,y)
    p.pd()
    p.color(c)
    p.circle(30,360)

p.pensize(7)
draw_circle(0,0,'blue')
draw_circle(60,0,'black')
draw_circle(120,0,'red')
draw_circle(90,-30,'green')
draw_circle(30,-30,'yellow')
p.done()