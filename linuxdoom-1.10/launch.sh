#!/bin/sh
Xephyr :1 -ac -br -screen 1280x800x8 -reset -terminate &
DISPLAY=:1 ./linux/linuxxdoom -potato

