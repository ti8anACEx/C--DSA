cin>>a>>b takes values as either:

1
2 (newline)

OR

1 2 (space)
OR

1   2 (tab)

BUT int a = cin.get() takes a single character 
if we give 1 in terminal, it will treat it as character '1' 
and map the char '1' to ASCII Table values as 49 here.
Basically, we can find out any ASCII Table value of any character if there is int datatype with cin.get()