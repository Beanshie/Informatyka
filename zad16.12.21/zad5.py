def fibonacci(n):
    if n < 1:
        return 0
    if n < 2:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

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
    print(fibonacci(i),end="\t")