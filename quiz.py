def new_game():
    guesses=[]
    correct_guesses=0
    question_num=1

    for key in questions:
        print('-----------------------')
        print(key)
        for i in options[question_num-1]:
            print(i)
        guess=input("Enter: ").upper()
        guesses.append(guess)

        correct_guesses+=check_answer(questions.get(key),guess)
        question_num+=1
    display_score(correct_guesses,guesses)
    
    play_again()

def check_answer(answer,guess):
    if answer==guess:
        print('correct')
        return 1
    else:
        print('Wrong')
        return 0

def display_score(correct_guesses,guesses):
    print("Result")
    print()
    print("answers: ",end=" ")
    for i in questions:
        print(questions.get(i),end=" ")
    print()
    print("guesses: ",end=' ')
    for i in guesses:
        print(i,end=" ")
    print()

    score=(correct_guesses/len(questions))*100
    print(score)

def play_again():
    play=input('play_ again: yes/no ').lower()
    if play=='yes':
        new_game()
    print('bye!')


questions={'who created python?: ':"A",
             'which year python was created':'B',
             'python is tribute to which group':'C',
             'is earth round':"A"}

options=[['A.Gudio Van Rossum','B.Elon Musk','C.Bill Gates','D.mark'],
         ['A.1989','B.1919','C.2000','D.2016'],
         ['A.Lonely','B.smosh','C.Monty Python','D.SNL'],
         ['A.true','B.false','C.sometims','D.eartnh']]
new_game()
