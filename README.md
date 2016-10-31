# Q_A_Friend
It is a small program about my good friend who lives in Santa Clara. PS: It is the first time I'm using makefile to draw a colorful picture.
______________________________________________________________________________________________________________________

1. I draw a Santa simply by Makefile. I have five basic different colors and one no color:
    (1) NOC=\033[0m (no color)
    (2) OKC=\033[32m(ok color == green)
    (3) ERC=\033[31m(error color == red)
    (4) WAC=\033[33m(warning color == yellow)
    (5) GRE=\x1b[32;01m(also green color)
    (6) PUR=\033[94;1m(purple color)
2. The picture is drawing when the makefile is generating the library, so basicalliy they are generated at the same time.

3. The after my excutable file was generated(named: Ques_about_nian), we can type the input content as below and the program
will answer the questions automatically:
    ./Ques_about_nian "Nian der ni zai gan sha?" 
    ./Ques_about_nian "Nian der dian hua duo shao?"
    ./Ques_about_nian "Nian der neng zai jin nian zhao dao gong zuo ma?"
    ./Ques_about_nian "Nian der der wo hao ya zenm ban?"
    
4. All the questions are written in Chinese pinyin as well as the answers.

PS: It is a good experience to me cause I wrote all of them included error_check or different cases. Please contact me 
if you have any good idea.
