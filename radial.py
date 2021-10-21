import turtle as t

t.bgcolor('black')
t.speed(20)
t.pensize(1)
colors = ('green', 'yellow')
for i in range(200):
    t.forward(i*1)
    t.right(91)
    t.color(colors[i%5])
    for x in range(3):
        t.forward(x*1)
        t.right(91)
        for y in range(2):
            t.forward(y*1)
            t.right(91)
            for z in range(739):
                t.forward(z*1)
                t.right(899)