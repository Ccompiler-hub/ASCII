#!/bin/bash
sudo mount -t tmpfs -o remount,size=3G /run

sudo apt update
sudo apt install nodejs npm htop -y

npm install -g @google/gemini-cli
gemini
