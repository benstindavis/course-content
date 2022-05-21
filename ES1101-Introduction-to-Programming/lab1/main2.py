import turtle

side = 50

def square(t):
    for i in range(0,4):
        t.forward(side)
        t.left(90)


def grid():
    t = turtle.Turtle()
    t.speed(0)
    for i in range(0,4):
        for j in range(0,4):
           
            t.up()
            t.goto(j*side,i*side)
            t.down()
            square(t)
    t.forward(side)
    t.left(90)
    t.forward(side)
    turtle.done()


grid()
