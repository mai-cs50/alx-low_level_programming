Resources:
https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240927%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240927T113848Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=6de33cc0370f34e83340185e2144b8155b16a4e0d6ab496b58d504619a47b2ad

https://en.wikipedia.org/wiki/Dennis_Ritchie

https://www.youtube.com/watch?v=de2Hsvxaf8M

https://www.youtube.com/watch?v=smGalmxPVYc

https://www.youtube.com/watch?v=rk2fK2IIiiQ

https://www.youtube.com/watch?v=FwpP_MsZWnU

https://www.youtube.com/watch?v=VDslRumKvRA

https://github.com/alx-tools/Betty/wiki

https://x.com/unix_byte/status/1024147947393495040?s=21

https://harmful.cat-v.org/software/c++/linus

https://github.com/alx-tools/Betty/blob/master/betty-doc.pl

https://github.com/alx-tools/Betty/blob/master/betty-style.pl

https://github.com/alx-tools/Betty

Betty linter
To run the Betty linter just with command betty <filename>:

Go to the Betty repository
Clone the repo to your local machine
cd into the Betty directory
Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:

#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

Once saved, exit file and change permissions to apply to all users with chmod a+x betty
Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!
