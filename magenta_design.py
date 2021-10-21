import turtle as t

t.bgcolor('black')
t.speed(60)
t.pensize(1)
colors = ('magenta')
for i in range(200):
    t.forward(i*4)
    t.right(91)
    t.color(colors)
    for j in range(3):
        t.forward(j*4)
        t.right(91)
        for x in range(2):
            t.forward(x*4)
            t.right(91)
            for y in range(739):
                t.forward(y*4)
                t.right(91)