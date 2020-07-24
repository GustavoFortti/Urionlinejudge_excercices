import math

a = input()
b = input()
c = input()

x=(b**2)-(4*a*c)
 
if x < 0 :
    print (" raiz negativa")
    exit()

else :
    x = math.sqrt(x)
    x1 = (-b+x)/(2*a)
    x2 = (-b-x)/(2*a)


print "\n\nX' = %f \nX'' = " % x1, x2

    // mat[0][0] = 0;
    // mat[0][1] = 0;
    // mat[0][2] = 0;
    // mat[0][3] = 0;
    // mat[0][4] = 1;

    // mat[1][0] = 1;
    // mat[1][1] = 1;
    // mat[1][2] = 0;
    // mat[1][3] = 0;
    // mat[1][4] = 1;

    // mat[2][0] = 0;
    // mat[2][1] = 1;
    // mat[2][2] = 0;
    // mat[2][3] = 0;
    // mat[2][4] = 0;

    // mat[3][0] = 0;
    // mat[3][1] = 0;
    // mat[3][2] = 0;
    // mat[3][3] = 1;
    // mat[3][4] = 1;

    // mat[4][0] = 1;
    // mat[4][1] = 1;
    // mat[4][2] = 0;
    // mat[4][3] = 0;
    // mat[4][4] = 0;
