<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><script src="http://cdn.bootcss.com/html5shiv/r29/html5.min.js"></script>
<script>
$(function(){
	$(".nh-nav-container .nh-nav-item").hover(function() {
		/* Stuff to do when the mouse enters the element */
		$(this).children('.nh-nav-item-hide').addClass('nh-nav-item-show');
		$(this).siblings('.nh-nav-item').children('.nh-nav-item-hide').removeClass('nh-nav-item-show');
	}, function() {
		/* Stuff to do when the mouse leaves the element */
		$(this).children('.nh-nav-item-hide').removeClass('nh-nav-item-show');
	});
})
</script>
<script type="text/javascript" src="/templets/lawyer/js/jquery.pin.min.js"></script>
<script language="javascript" type="text/javascript" src="<?php echo $GLOBALS['cfg_cmsurl']; ?>/include/dedeajax2.js"></script>
<script language="javascript" type="text/javascript">
<!--
	function CheckLogin(){
	  var taget_obj = document.getElementById('_userlogin');
	  myajax = new DedeAjax(taget_obj,false,false,'','','');
	  myajax.SendGet2("<?php echo $GLOBALS['cfg_cmspath']; ?>/member/ajax_loginsta.php");
	  DedeXHTTP = null;
	}
-->
</script>
<header class="new-header">
    <div class="nh-info">
        <div class="inner-box o-h">
            <div class="nh-info-logo fl"> <a href="/"><img height="60" src="/templets/lawyer/images/yifatonglogo_whithout_word.png" alt="法易通法律法务"></a> </div>
            <div class="nh-info-items fr" id="_userlogin"> 
                <!-- 未登录 --> 
                <img class="link-flgw" width="189" height="26" src="/templets/lawyer/images/400.png" alt="服务热线" /> <a class="link" rel="nofollow" href="/member/login.php" class="load">登录</a> <a class="link" rel="nofollow" href="/member/reg_new.php" class="regist">注册</a> 
                <!-- 登录 --> 
                <script language="javascript" type="text/javascript">CheckLogin();</script> 
            </div>
        </div>
    </div>
    <nav class="nh-nav">
        <div class="inner-box p-r">
            <div class="nh-nav-container"> <span class="diwei-dizhi"><span class="ico-font"></span><span id="spCurrentCity"></span></span>
                <div class="nh-nav-item"> <a class="daohang" target="_blank" href="/" class="click">首页</a> </div>
                <div class="nh-nav-item p-r"> <a class="daohang" target="_blank" href="/flgw/124.html">法律顾问</a>
                    <ol class="p-a">
                        <li><a class="yaobianse" href="/flgw/124.html">企业法律顾问</a></li>
                        <li><a class="yaobianse" href="/flgw/125.html">个人法律顾问</a></li>
                    </ol>
                </div>
                <div class="nh-nav-item p-r"> <a class="daohang" target="_blank" href="/nsht/">审查合同</a></div>
                <!--<div class="nh-nav-item"> <a class="daohang youbiankuang" target="_blank" href="/nsht/">审查合同</a>
                    <div class="nh-nav-item-hide">
                        <div class="nnih-inner">
                            <h2><a href="/nsht/cyjy/">婚姻家庭</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '11';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                        <div class="nnih-inner">
                            <h2><a href="/nsht/ldrs/">遗产继承</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '12';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                        <div class="nnih-inner">
                            <h2><a href="/nsht/zlht/">租赁合同</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '13';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                        <div class="nnih-inner">
                            <h2><a href="/nsht/dgs/">交通事故</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '14';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                        <div class="nnih-inner">
                            <h2><a href="/nsht/ldrs/">劳动人事</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '54';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                        <div class="nnih-inner">
                            <h2><a href="/nsht/zscq/">知识产权</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '55';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                        <div class="nnih-inner">
                            <h2><a href="/nsht/gqsw/">股权事务</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '56';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                       <div class="nnih-inner">
                            <h2><a href="/nsht/swht/">商务合同</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '57';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                       <div class="nnih-inner">
                            <h2><a href="/nsht/ssws/">诉讼文书</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '58';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                       <div class="nnih-inner">
                            <h2><a href="/nsht/qtht/">其他合同</a></h2>
                            <?php
$atts = array();
$atts['tagname'] = 'arclist';
$atts['typeid'] = '59';
$atts['row'] = '20';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
                            <p><a href="[field:arcurl/]" class="lianjie" target="_blank">[field:title/]</a></p>
                            <?php
}
}
?> </div>
                    </div>
                </div>-->
                <div class="nh-nav-item p-r"> <a class="daohang" target="_blank" href="/ask/?ct=question&ac=ask_complete">法律咨询</a>
                    <ol class="p-a">
                        <li><a class="yaobianse" href="/ask/?ct=question&ac=ask_complete">在线法律咨询</a></li>
                        <li><a class="yaobianse" href="/flzx/123.html">电话法律咨询</a></li>
                    </ol>
                </div>
                <div class="nh-nav-item"> <a class="daohang youbiankuang" target="_blank" href="/zls/">找律师</a>
                    <div class="nh-nav-item-hide nh-nav-item-kuan">
                        <div class="nnih-inner width144"> <p><a href="/zls/ldzc/" class="lianjie" target="_blank">劳动仲裁</a></p><p><a href="/zls/zwjf/" class="lianjie" target="_blank">债务纠纷</a></p><p><a href="/zls/fcjf/" class="lianjie" target="_blank">房产纠纷</a></p> </div>
                        <div class="nnih-inner width144"> <p><a href="/zls/htjf/" class="lianjie" target="_blank">合同纠纷</a></p><p><a href="/zls/qslh/" class="lianjie" target="_blank">起诉离婚</a></p><p><a href="/zls/jtsg/" class="lianjie" target="_blank">交通事故</a></p> </div>
                        <div class="nnih-inner width144"> <p><a href="/zls/xsbh/" class="lianjie" target="_blank">刑事辩护</a></p><p><a href="/zls/zscq/" class="lianjie" target="_blank">知识产权</a></p><p><a href="/zls/rssh/" class="lianjie" target="_blank">人身损害</a></p> </div>
                        <div class="nnih-inner width144">
                            <p><a href="/zls/qtjf/" class="lianjie" target="_blank">其他纠纷</a></p>
                        </div>
                        <div class="nnih-tupian nnih-tupian-xiao"> <a href="/zls/"><img src="/templets/lawyer/images/zhaolvshi.png" alt="找律师"></a> </div>
                    </div>
                </div>
                <div class="nh-nav-item p-r"> <a class="daohang" target="_blank" href="/flbk/">法律百科</a></div>
            </div>
            <div class="nh-nav-search p-a">
                <form target="_blank" action="/plus/search.php" method="get">
                    <input type="text" placeholder="搜索法律问题"  name="keyword" />
                    <input type="submit" value="" />
                    <b class="p-a ico-font"></b>
                </form>
            </div>
        </div>
    </nav>
</header>
<div id="allmap" style="display: none"></div>
<script type="text/javascript" src="http://api.map.baidu.com/api?v=2.0&ak=MuNvHFgbfd42G9ZcLoB7sBvSECNMwzUW"></script>
<script>
// 百度地图API功能
var map = new BMap.Map("allmap");
var point = new BMap.Point(116.331398,39.897445);
map.centerAndZoom(point,12);
function myFun(result){
	var cityName = result.name;
	map.setCenter(cityName);
	$("#spCurrentCity").html(cityName);
}
var myCity = new BMap.LocalCity();
myCity.get(myFun);
</script>