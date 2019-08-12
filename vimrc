set nonu
set ai
set cindent
set tabstop=2
set shiftwidth=2
set bg=dark
syntax on
set t_Co=256
color molokai
set expandtab
filetype indent on
map <f9> :w<cr>:!g++ -O2 -std=gnu++11 -static -lm -o %< % && ./%< <cr> 
