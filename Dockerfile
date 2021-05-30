FROM vvakame/review:5.1

ENV APP_HOME /book
RUN mkdir -p $APP_HOME
WORKDIR $APP_HOME

RUN useradd -m docker
RUN chown docker:docker /book 

ADD Gemfile Gemfile
ADD package.json package.json
ADD package-lock.json package-lock.json

RUN gem install bundler:1.17.2
RUN bundle install

USER docker
RUN npm install
