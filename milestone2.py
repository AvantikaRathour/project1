print(" WELCOME TO TIC TAC TOE!")
print("************************")
def display(board):
    print("  " + board[1] + " " + "|" + " " + board[2]+ " " + "|"+board[3])
    print("    |   |   ")
    print("----|---|----")
    print("  " + board[4] + " " + "|" + " " + board[5]+ " " + "|"+board[6])
    print("----|---|----")
    print("  " + board[7] + " " + "|" + " " + board[8]+ " " + "|" +board[9])
    print("    |   |   ")

def player_input():
    player = "wrong"
    while player not in ["X","O"]:
          player= input(" enter the choice ('X','O')\n")
          if player  not in ["X","O"]:
              print("invalid choice of player")
    if player=="X":
        return ("X","O")
    else:
        return ("O","X")
def position_choice(board):
     position=0
     if position not in [1,2,3,4,5,6,7,8,9] or not  space_check(board,position):
        position=int(input("enter position (1,10)"))
     return position           
    

def replace_choice(board,position,player):
    board[position]=player
    return board
def win_check(board,player):
        return ((board[7] == player and board[8] == player and board[9] == player) or 
                (board[4] == player and board[5] == player and board[6] == player) or 
                (board[1] == player and board[2] == player and board[3] == player) or
                (board[7] == player and board[4] == player and board[1] == player) or 
                (board[8] == player and board[5] == player and board[2] == player) or 
                (board[9] == player and board[6] == player and board[3] == player) or 
                (board[7]==player  and board[5] == player and board[3] == player) or 
                (board[9] == player and board[5] == player and board[1] == player))



def space_check(board,position):
    return board[position]== " "
def full_board_check(board):
    for num in range(1,10):
        if space_check(board,num):
            return False
    return True
def replay():
    return input("Do you want to play again ,enter yes or no : \n").lower().startswith("y")
import random
def choose_first():
    if random.randint(0,1)==0:
        return "player1"
    else:
        return "player2"

while True  :
    board=[' ']*10
    player1,player2=player_input()
    turn= choose_first()
    if turn==0:
        print(turn + " will go first")
    else:
        print(turn+" will go first")
    play_game=input("are you ready to play the game yes or no: \n")
    if play_game.lower()[0]=="y":
        game_on=True
    else:
        game_on=False
    while game_on==True:
        if turn=="player1":
             display(board)
             position=int(position_choice(board))
             replace=replace_choice(board,position,player1)
             if win_check(board,player1):
                 display(board)
                 print("CONGRATULATIONS! PLAYER1 HAS WON THE GAME")
                 game_on=False
             else:
                 if full_board_check(board):
                     display(board)
                     print("GAME IS DRAW")
                     break
                 else:
                     turn="player2"
        else:
            if turn=="player2":
                 display(board)
                 position=position_choice(board)
                 replace=replace_choice(board,position,player2)
                 if win_check(board,player2):
                     
                      display(board)
                      print("CONGRATULATIONS! PLAYER2 HAS WON THE GAME")
                      game_on=False
                 else:
                      
                     if full_board_check(board):
                         
                          display(board)
                          print("GAME IS DRAW")
                          break
                     else:
                         turn="player1"
    if not replay():
          break        
        
        
         
            
    
    
    
    
        
        
    







