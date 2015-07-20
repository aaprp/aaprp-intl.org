<!DOCTYPE html>
<!--[if IEMobile 7]><html class="iem7" <?php print $html_attributes; ?>><![endif]-->
<!--[if (lte IE 6)&(!IEMobile)]><html class="ie6 ie6-7 ie6-8" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 7)&(!IEMobile)]><html class="ie7 ie6-7 ie6-8" <?php print $html_attributes; ?>><![endif]-->
<!--[if (IE 8)&(!IEMobile)]><html class="ie8 ie6-8" <?php print $html_attributes; ?>><![endif]-->
<!--[if (gte IE 9)|(gt IEMobile 7)]><!--><html <?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->
<head>
<?php print $head; ?>
<meta name="viewport" content="width=device-width, initial-scale=1">
<meta name="MobileOptimized" content="width">
<meta name="HandheldFriendly" content="true">
<meta name="apple-mobile-web-app-capable" content="yes">
<meta http-equiv="cleartype" content="on">
<meta http-equiv="X-UA-Compatible" content="IE=edge, chrome=1">
<title><?php print $head_title; ?></title>
<?php print $styles; ?>
<?php print $scripts; ?>
<!--[if lt IE 9]>
<script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
<![endif]-->
</head>
<body class="<?php print $classes; ?>"<?php print $attributes; ?>>
  
  <!-- BEGIN Web Presence Survey #1 -->
<!-- COMMENTED OUT APRIL 29, 2015
  <style>
    .survey-request {
      background-color: #eee;
      padding: 1em;
      text-align: center;
      border-bottom: 1px solid #888;
      color: #777;
      box-shadow: 0 -1px 2px 0px rgba(0,0,0,0.25) inset;
    }
    .survey-request .button {
      background-color: #006633;
      color: #eee;
      padding: 0.3em 0.5em;
      border-radius: 2px;
      box-shadow: 0 -1px 2px 0 rgba(0,0,0,0.25);
      text-decoration: none;
    }
  </style>
  <div class="survey-request">
    Help us improve the information we provide to you by taking our
    <a href="http://goo.gl/OGQFrv" target="_blank">short survey</a>:
    <a href="http://goo.gl/OGQFrv" target="_blank" class="button">Go to the Survey</a>
  </div>
-->
  <!-- END Web Presence Survey #1 -->
  
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

<!--
  This is the old ga.js-based tracking code. This has been deprecated by the 
  analytics.js-based code below. -->

  <script type="text/javascript">
    var _gaq = _gaq || [];
    _gaq.push(['_setAccount', 'UA-38936503-1']);
    _gaq.push(['_setDomainName', 'aaprp-intl.org']);
    _gaq.push(['_trackPageview']);

    (function() {
      var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
      ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
      var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
    })();
  </script>
<!--
  <script>
    (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
    (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
    m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
    })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

    ga('create', 'UA-38936503-1', 'aaprp-intl.org');
    ga('send', 'pageview');

  </script>
-->

</body>
</html>
