devshop2
========

DevShop 2


Build
-----

To build a devshop front-end, simply run `drush make`: 

```
drush make https://raw.githubusercontent.com/devshopsystems/devshop2/2.x/build-devshop.make devshop-folder
```

To install the front-end, you need a running mysql server.
Use `drush site-install`:

```
cd devshop-folder
drush si devshop --db-url=mysql://root:rootpass@localhost/devshop
```

Once installed, you can run it easily with drush run-server:

```
drush rs
HTTP server listening on 127.0.0.1, port 8888 (see http://127.0.0.1:8888/), serving site default...
PHP 5.5.9-1ubuntu4.5 Development Server started at Sat Nov 15 13:50:17 2014
Listening on http://127.0.0.1:8888
Document root is /home/jon/Tests/devshop
Press Ctrl-C to quit.
```

Then simply open http://127.0.0.1:8888/ in your browser.