import random
while True:
    choices=['rock','paper','scissors']

    computer=random.choice(choices)
    player=None
    while player not in choices:
        player=input('rock,papper,scissors  ').lower()

    print('computer: ',computer)
    print('player: ',player)

    if player==computer:
        print('tie')

    elif player=='rock':
        if computer=='paper':
            print('computer win')
        else:
            print('player win')

    elif player=='paper':
        if computer=='rock':
            print('player win')
        else:
            print('computer win')

    elif player=='scissors':
        if player=='paper':
            print('computer win')
        else:
             print('player win')
    play=input('yes/no ').lower()
    if play!='yes':
        break
print("Bye")