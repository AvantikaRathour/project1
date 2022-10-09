#********************************GUESS THE POSITION*********************************************
def shuffle_list(my_list):
    shuffle(my_list)
    return my_list
def player_check():
    guess=''
    while guess not in ["0","1","2"]:
        guess=input("guess from 0,1,2 ")
    return int(guess)
def check(my_list,guess):
    if my_list[guess]=="o":
        print("correct")
    else:
        print("incorrect")
        
from random import shuffle
my_list=["","o",""]
mixed=shuffle_list(my_list)
guess_by_player=player_check()
a=check(mixed,guess_by_player)
print(a)
print(my_list)