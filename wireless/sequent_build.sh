#!/bin/bash

# Ensure environment variables are set
export USER_ID=$(id -u)
export GROUP_ID=$(id -g)

# Run normally
docker-compose down
docker-compose up
