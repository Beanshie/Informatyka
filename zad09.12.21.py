def bok(komunikat):
    while True:
        a = int(input(komunikat))
        if a<=0:
            print("Musisz podać liczbę większą od 0!")
            continue
        else:
            break
    return a

def poprawnosc(a,b,c):
    if a+b<c or b+c<a or c+a<b:
        return False
    return True

a = bok("Podaj bok a: ")
b = bok("Podaj bok b: ")
c = bok("Podaj bok c: ")

if poprawnosc(a,b,c)==True:
    print("Z podanych wyżej boków można zbudować trójkąt")
else:
    print("Z podanych wyżej boków nie można zbudować trójkątu")
