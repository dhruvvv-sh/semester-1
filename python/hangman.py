import random
movies = ["Lagaan","Kabhi Khushi Kabhie Gham","Dil Chahta Hai","Devdas","Kal Ho Naa Ho","Veer Zaara","Swades","Black","Rang De Basanti","Don","Om Shanti Om","Taare Zameen Par","Jaane Tu Ya Jaane Na","Ghajini","3 Idiots","My Name Is Khan","Zindagi Na Milegi Dobara","Dabangg"]
random_choice = random.choice(movies)
z = len(random_choice)
print("the length of the movie chosen is(with spaces):",z)
display_string = ''.join('_' if char != ' ' else ' ' for char in random_choice)
display_list = ['_' if char != ' ' else ' ' for char in random_choice]
print("the underscore of the movie title:",display_string)
print("you have 10 tries(good luck):")
q = 0
while q<10:
    a = input("enter char:")
    if a == random_choice:
         print("congrats on getting it right")
         break
    for i in range(z):
        if a == random_choice[i]:
             display_list[i] = a
    print(" ".join(display_list))
    if "_" not in display_list:
         print(f"Congratulations! You guessed the movie: {random_choice}")
         break
    q = q + 1
    x = 10 - q
    print("number of tries left: ",x)
    
 