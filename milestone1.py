def display(game_list):
    print(game_list)
    
def position_choice():
    choice='wrong'
    while choice not in ["0","1","2"]:
        choice = input("enter your choice : ")
        if choice not in ["0","1","2"]:
            print("you choce is invalid ")
    return int(choice)
def replacement_choice(game_list,position):
     replaced_value=input("enetr the value which you want to place : ")
     game_list[position]=replaced_value
     return game_list
def gameon_choice():
    choice='wrong'
    while choice not in ["Y","N"]:
        choice=input("enter (Y,N):" )
        if choice not in ["Y","N"]:
            print("invalid choice ")
    if choice=="Y":
        return True
    else:
        return False
gameon=True
game_list=[0,1,2]
while gameon==True:
    display(game_list)   
    position=position_choice()
    replacement=replacement_choice(game_list,position)
    print(display(game_list))
    gameon=gameon_choice()
    
                     

    