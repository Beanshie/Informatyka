def wprowadzenie(od,do,komunikat):
    while True:
        try:
            wartosc = int(input(komunikat))
            if wartosc<od or wartosc>do:
                print("Musisz podać liczbę od "+str(od)+" do "+str(do)+"!")
                continue
            else:
                break
        except ValueError:
            print("Musisz podać liczbę całkowitą!")
            continue
    return wartosc

n=wprowadzenie(1,10_000,"Podaj n: ")

for i in range(1,n+1):
    if i==1:
        a=2
        print(a,end="\t")
        continue
    if i%2==1:
        a*=2
    if i%2==0:
        a+=5
    print(a, end="\t")