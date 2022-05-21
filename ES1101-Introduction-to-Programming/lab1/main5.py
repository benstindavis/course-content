import turtle


rad = 120


t = turtle.Turtle()
t.speed(0)

angle = 0 
deg = 10

while angle<=360:
    t.setheading(angle)
    angle+=deg
    t.circle(rad)

turtle.done()
