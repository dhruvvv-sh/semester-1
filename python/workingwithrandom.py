import random
def roll():
    minvalue = 1
    maxvalue = 6
    roll = random.randint(minvalue,maxvalue)
    return roll
value = roll()
print(value)
while True:
    try:
        players = int(input("Enter the number of players: "))
        if 2 <= players <= 4:
            break
        else :
            print("enter valid number between 2 and 4")
    except ValueError:
        print("That's not a valid number!")

print(players)


