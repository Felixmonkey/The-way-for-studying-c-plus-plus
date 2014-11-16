int max_tries=3;
int tries_cnt=0;
while(tries_cnt<max_tries)
{
    if(user_guess==next_elem)
    break;
    tries_cnt++;
}
//

string word;
const int min_size=4;
while(cin>>word)
{
    if(word.size<min_size)
    continue;
    process_text(word);
}
