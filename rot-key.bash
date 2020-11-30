#!/bin/sh
if [ $# == 0 ]
then
    echo "rot-key <intra/github>"
else
    if [ $1 == "intra" ]
    then
        if [ -d "/Users/ibaali/.sshIntra" ]
        then
            mv /Users/ibaali/.ssh /Users/ibaali/.sshGithub
            mv /Users/ibaali/.sshIntra /Users/ibaali/.ssh
        fi
        echo "You are ready to clone from Intra"
    else
        if [ $1 == "github" ]
        then
            if [ -d "/Users/ibaali/.sshGithub" ]
            then
                mv /Users/ibaali/.ssh /Users/ibaali/.sshIntra
                mv /Users/ibaali/.sshGithub /Users/ibaali/.ssh
            fi
            echo "You are ready to clone from Github"
        else
            echo "Invalid Platform..!!"
        fi
    fi
fi
