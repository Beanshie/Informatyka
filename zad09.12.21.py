a=-1
while a<0:
    a=int(input())
print("długość boku 'a' została podana poprawnie i wynosi", a)


b=-1
while b<0:
    b=int(input())
print("długość boku 'b' została podana poprawnie i wynosi", b)


c=-1
while c<0:
    c=int(input())
print("długość boku 'c' została podana poprawnie i wynosi", c)


print("wprowadzone długości boków to kolejno", a,"; ", b, "; ", c)


if a+b>c and a+c>b and c+b>a:
    print("można z tych boków utworzyć trójkąt")
else:
    print("z tych boków nie można utworzyć trójkąta")
