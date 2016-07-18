luggage_resources
================

Features
================

Back in the day, when you built a website you included a page called Interesting Links. This was a bulleted list of all of the websites you thought that visitors to your website might be interested in.

Luggage Resources builds on that idea.

But instead of a bulleted list, we have a default view.

And instead of just having the title of the web page we are linking to, we have a screenshot.

And we automatically parse out metadata in the <head> element of the page.

Creating a resource is easy. Enter the URL of the resource you want to add and Luggage will go out and get the screenshot, parse the metadata, and present it to you for final editing before the resource is added to your website. See the [step-by-step instructions](http://luggagedocs.info/luggage_doc/creating-resource).

Plugins
================

Suppose you have a website that has a catalog of items, and when Luggage Resources builds a screenshot of that site you don't want a generic screenshot of the whole page but want to use a particular image on the page. The URL for the image is inside an HTML element with an id. You can write a hook implementation so that Luggage Resources will use the image you provide instead.

Here's an example. Suppose you want to use the product images from Amazon. You would write a site-specific module, say in sites/all/custom/sitespecific/sitespecific.module. In the module you would use the following code to tell Luggage Resources to use the product image in the 'data-old-hires' attribute of the landingImage element:

````
<?php

// Implements hook_luggage_resources_dom_data()
function sitespecific_luggage_resources_dom_data($doc, &$data) {
  $parsed = parse_url($data['return']['url_actually_used']);
  if ($parsed['host'] == 'www.amazon.com') {    
    $product_image_element = $doc->getElementByID('landingImage');
    if ($product_image_element !== NULL) {
      $data['return']['preferred_screenshot_url'] = $product_image_element->getAttribute('data-old-hires');
    }
    
    // No need to parse out description since Amazon puts it into meta tag
    // in <head> element, so luggage_resources will already have parsed it.
    
    /**
    $product_description_element = $doc->getElementByID('idGoesHere');
    if ($product_description_element !== NULL) {
      $description = check_plain($product_description_element->nodeValue);
      $data['meta']['name']['description'] = $description;
    }
    **/
  }  
}
````
