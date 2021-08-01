# Evaluating PI number

To calculate PI number imagine next. 
We have a circle inside a square with radius = r. We have a square with side length r*2.
We this square as dartboard and we toss many dards at it. The idea is the ratio of darts inside circle to total dards thrown should be the ration between the area of the circle and area of the square.

To solve it we have to rand x and y with domain [0,1]. Check if the coordinates inside circle (r^2 = x^2 + y^2). If there are so we increment totalDartdsInCircle.
Then we find a ration between totalDartsInCircle and all throwns darts.
