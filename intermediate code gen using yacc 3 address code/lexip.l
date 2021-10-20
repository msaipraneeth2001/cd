
opr [*+-/=]
%%
[\t]. {}
[a-zA-Z]* {sscanf(yytext,"%c",&yylval);return id;}
[\n] {return(yytext[0]);}
{opr} {return(yytext[0]);}
%%

int yywrap()
{ 
return 1;
}