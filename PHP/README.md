# Running index.php File with PHP Development Server

To run your `index.php` file located at `/home/user/Desktop/test/php/index.php`, follow these steps:

1. Open a terminal.

2. Navigate to the directory containing your `index.php` file:

```
cd /home/user/Desktop/test/php/
```

3. Once you're in the correct directory, start the PHP development server by running:

```
php --server localhost:8080 --docroot .
```



4. Your `index.php` file should now be accessible in your web browser at [http://localhost:8080/index.php](http://localhost:8080/index.php).

> **Note:** Replace `user` with your actual username if it's different, and ensure that PHP is installed on your system. If you encounter any permission issues, you may need to use `sudo`, but be cautious when doing so, especially on sensitive directories like your desktop.



PHP installation guide for RHEL/Fedora [PHP Installation Guide](https://developer.fedoraproject.org/tech/languages/php/php-installation.html)
