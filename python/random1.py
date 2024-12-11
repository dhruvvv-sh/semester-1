#creating a game where you need to guess the number chosen by the computer
import random
z = random.randint(1,10)
while True:
    x = int(input("Guess the number between 1 and 10: "))
    if x == z:
        print("Yay, congrats on guessing the number!")
        break
    elif x < z:
        print("Too low, try again!")
    else:
        print("Too high, try again!")
