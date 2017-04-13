import math

def quadratic_equation(a, b, c):
    judge = b*b - 4*a*c
    if judge < 0:
        print 'judge=' + str(judge)
    elif judge == 0:
        result = -(b/(2*2))
        return result
    else:
        x1 = (-b + math.sqrt(judge))/(2*a)
        x2 = (-b - math.sqrt(judge))/(2*a)
        return x1, x2

print quadratic_equation(2, 3, 0)
print quadratic_equation(1, -6, 5)
print quadratic_equation(1, 1, 5)




