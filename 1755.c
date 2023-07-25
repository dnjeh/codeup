#include <stdio.h>
#include <string.h> 
int main() {
    char t[110], *a[12][2] = {
{".dib", "Paint.Picture"  },
{".doc", "Word.Document.8"  },
{".docx", "Word.Document.12"  },
{".htm", "htmfile"  },
{".html", "htmlfile"  },
{".hwp", "Hwp.Document.96"  },
{".hwpx", "Hwp.Document.hwpx.96"  },
{".hwt", "Hwp.Document.hwt.96"  },
{".jp", "jpegfile"  },
{".ppt", "PowerPoint.Show.8"  },
{".pptx", "PowerPoint.Show.12"  },
{".pptxml", "powerpointxmlfile"}
    };
    scanf("%s", t);
    for(int i=11;i>=0;i--) {
        if(strstr(t, a[i][0])) {
            printf("%s", a[i][1]);
            return 0;
        }
    }
}