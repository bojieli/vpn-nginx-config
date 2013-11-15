    if ($http_user_agent ~ "Mozilla") {
        set $test "Browser";
    }
    if ($http_user_agent ~ "MSIE (5|6|7)") {
        set $test "IE-legacy";
    }
    if ($scheme = "https") {
        set $test "secured";
    }
    if ($test = "Browser") {
        rewrite ^/(.*)$ https://$http_host/$1 permanent;
    }
