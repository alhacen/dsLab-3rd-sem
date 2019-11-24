#include <stdio.h>
#include <string.h>
void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
int main(){
        progname();void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
        char url[50],tmp_tld[50],tld[50];int url_len,i,ssl,j,k;
        printf("enter url: ");
        scanf("%s",&url);
        // char url[50]="http://www.alhacen.in";
        url_len=strlen(url);
        i=0,j=0;
        if((strncmp(url,"https://www.",11)==0)||(strncmp(url,"http://www.",10)==0)){
                ssl=(strncmp(url,"https://www.",11)==0)?1:0;
                //printf("%d",strlen(url));
                while(url[url_len-i]!='.'){
                        tmp_tld[i]=url[url_len-i];
                        // printf("%c",tmp_tld[3] );
                        i++;
                }
                // printf("%c",tmp_tld[3]);
                for(j=0;j<i;j++){
                        // printf("%c",tmp_tld[j]);
                        tld[j]=tmp_tld[i-j-1];
                }

                if((strncmp(tld,"com",3)==0)||(strncmp(tld,"in",2)==0)||(strncmp(tld,"org",3)==0)){
                        printf("valid url");
                }else{
                        printf("invalid url\n");
                }
        }else{printf("\nurl should be in form in https://www.google.com");}
        // printf("%d",strncmp(url,"http",8));

}