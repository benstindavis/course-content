import turtle

side = 100

def square(t):
    for i in range(0,4):
        t.forward(side)
        t.right(90)


def drawVshape(t,height,updown):
    if updown:     #up
        t.setheading(0)
        t.left(45)
        t.forward(height*1.414)
        t.right(90)
        t.forward(height*1.414)
        t.right(45)
    else:      #down
        t.setheading(0)
        t.right(45)
        t.forward(height*1.414)
        t.left(90)
        t.forward(height*1.414)
        t.left(45)

def drawFigure():
    t = turtle.Turtle()
    square(t)
    drawVshape(t,side/2,1)
    t.goto(0,-1*side)
    drawVshape(t,side/2,0)
    t.goto(0,0)
    t.setheading(0)
    turtle.done()


drawFigure()            