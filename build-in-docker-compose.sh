#!/bin/bash
[ ! -z $REVIEW_CONFIG_FILE ] || REVIEW_CONFIG_FILE=config.yml

docker-compose run -u docker --rm review /bin/bash -ci "cd /book && REVIEW_CONFIG_FILE=$REVIEW_CONFIG_FILE npm run pdf"
