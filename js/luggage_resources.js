(function ($) {
    console.log(Drupal);
//    Drupal.behaviors.linkyfill = {
//        attach: function(context, settings) {
//            console.log(settings);
//            $("#edit-field-uri-und-0-url").bind('input', function(e) {
//                var url = $(this).val();
//                get_page_title(url);
//                if(url.indexOf("http://") > -1) {
//                    //console.log("pass");
//                    //get_page_title("http://www.google.com");
//                } else {
//                    //console.log("fail");
//                }
//
//                function get_page_title(url) {
//                    var proxyurl = "./get_external_content.php?url=" + url;
//                    $.ajax({
//                        type: "GET",
//                        url: proxyurl,
//                        data: "{url: \"" + url + "\"}",
//                        success: function(data) {
//                            console.log(data);
//                        }
//                    });
//                }
//            });
//        }
//    };
})(jQuery)