rewrite_by_lua '
	if ngx.var.scheme == "https" then return end
	if ngx.var.http_x_original_host then return end
	if ngx.var.http_user_agent and ngx.re.match(ngx.var.http_user_agent, "Mozilla") then
		if ngx.re.match(ngx.var.http_user_agent, "MSIE (5|6|7)") then return end
		return ngx.redirect("https://" .. ngx.var.http_host .. ngx.var.request_uri)
	end';
