<h3>about</h3>

<p>
This is a ocrad addon for openframeworks. you can treat ocrad library easily.</p>
<p>
For more details about ocrad library, please check <a href="http://www.gnu.org/software/ocrad/">here</a>
</p>

<h3>getting started</h3>
<ol>
<li>get ocrad source and compile. </li>
<li>get ocradlib.a and ocradlib.h</li>
<li>makes a ofxOcrad directory in addon directory</li>
<li>copy src, include and libs directory in ofxOcrad</li>
<li>drag & drop "ofxOcrad" directory to ofxOcrad folder on xcode</li>
<li>done</li>
</ol>

<h3>sample code</h3>
<ol>
<li>ofxOcrad ocrad;</li>
<li>ocrad.setOfImage( Ofimage *image );</li>
<li>printf("%s\n", ocrad.str_result);  // now you got result</li>
</ol>

<h3>supported os</h3>
<p>
only Mac OSX ( 10.6, 10.7, 10.8 ).
</p>


