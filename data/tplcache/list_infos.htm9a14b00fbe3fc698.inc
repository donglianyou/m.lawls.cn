<?php
$z[0]=Array("field","",226,248);
$z[0][4]=array();
$z[0][4]['name']="seotitle";
$z[1]=Array("global","",249,277);
$z[1][4]=array();
$z[1][4]['name']="cfg_indexname";
$z[2]=Array("field","",318,347);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",387,445);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",2495,2532);
$z[4][4]=array();
$z[4][4]['filename']="header.htm";
$z[5]=Array("field","",3673,3702);
$z[5][4]=array();
$z[5][4]['name']="position";
$z[6]=Array("infolink","\r\n                    <div class=\"choose-block\">\r\n                        <div class=\"city-bar\">\r\n                            <div class=\"title-part\">\r\n                                <h3>所在城市：</h3>\r\n                            </div>\r\n                            <div class=\"content-part\"> \r\n								[field:linkallplace /]\r\n								<select id=\"province\" onchange=\"provinceSelect(this,[field:channelid/],[field:typeid/],'[field:selyears/]')\">\r\n									<option value=\"\">选择省份</option>\r\n									[field:topplace /]\r\n								</select>\r\n								<select id=\"city\" onchange=\"citySelect(this,[field:channelid/],[field:typeid/],'[field:selyears/]')\">\r\n										<option value=\"\">选择县市</option>\r\n                                        [field:nativeplace /]\r\n								</select>\r\n                            </div>\r\n                        </div>\r\n                        <div class=\"special-bar\">\r\n                            <div class=\"title-part\">\r\n                                <h3>专长领域：</h3>\r\n                            </div>\r\n                            <div class=\"content-part\">\r\n								[field:typename /]\r\n								<!--{dede:channel typeid='16' type=\"son\"}\r\n								<a href=\"[field:typeurl/]\" >[field:typename/]</a>\r\n								{/dede:channel}-->\r\n							</div>\r\n                        </div>\r\n                        <div class=\"year-bar\">\r\n                            <div class=\"title-part\">\r\n                                <h3>执业年限：</h3>\r\n                            </div>\r\n                            <div class=\"content-part\" style=\"border-bottom: none;\">[field:linkalltype/] [field:infotype /]</div>\r\n                        </div>\r\n                    </div>\r\n                    <script>\r\n						\$(\"input[name='years']\").click(function(){\r\n							var yearsval = \$(this).val();\r\n							//\$.get(\"/plus/list.php?channelid=[field:channelid/]&tid=[field:typeid/]&nativeplace=[field:selnat/]&infotype=\"+yearsval,)\r\n							window.location.href=\"/plus/list.php?channelid=[field:channelid/]&tid=[field:typeid/]&nativeplace=[field:selnat/]&infotype=\"+yearsval;\r\n						})\r\n					</script>\r\n                ",3958,6139);
$z[6][4]=array();
$z[7]=Array("list","\r\n                        <li class=\"clearfix\">\r\n                            <div class=\"hb-right\"> </div>\r\n                            <a href=\"[field:arcurl/]\" class=\"law-photo\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a>\r\n                            <div class=\"fl\">\r\n                                <p> <a href=\"[field:arcurl/]\" class=\"f16 s-c333 fb\" target=\"_blank\">[field:title/]</a><i title=\"[field:title/]\" class=\"ico-new i-new63\"></i> [field:tag/]<!--<span class=\"law-bq\">有团队</span><span class=\"law-bq\">办过大案</span>--> </p>\r\n                                <div class=\"mt5 clearfix\">\r\n                                    <div class=\"w325 fl\">\r\n                                        <p>擅长：[field:skill/]</p>\r\n                                        <p class=\"mt5\"> <em class=\"law-qg\">特色律所</em> <a href=\"[field:arcurl/]\" target=\"_blank\">[field:addr/]</a> </p>\r\n                                        <p class=\"s-c999 mt5\"><i class=\"ico-lr i-place mr5\"></i>[field:address/]</p>\r\n                                    </div>\r\n                                    <div class=\"w373 fl\">\r\n                                        <p><span class=\"mr20\">案例：[field:cases/]</span><span>帮助：[field:helps/]</span></p>\r\n                                        <p class=\"mt15 clearfix\"> <span class=\"law-tel\"><i class=\"ico-new i-new79\"></i>[field:tel/]</span> <a href=\"/swt/\" target=\"_blank\" class=\"btn btn-gn2\">在线咨询</a> </p>\r\n                                    </div>\r\n                                </div>\r\n                                <div class=\"mt15 clearfix lh24\">\r\n                                    <div class=\"law-ensure pr fl mr30\">\r\n                                    [field:id runphp='yes']  \r\n									\$aid = @me;\r\n									\$row=\$GLOBALS['dsql']->GetOne(\"select a.star FROM dede_addoninfos as a where a.aid='\$aid' \");\r\n									@me=str_repeat('<i class=\"ico-ft i-sr14 i-sr14-oe\"></i>',\$row['star']);\r\n									[/field:id]\r\n									 </div>\r\n                                    <span title=\"执业认证\" class=\"s-c999 mr20\"><i class=\"ico-new i-new73 mr5\"></i>执业认证</span> </div>\r\n                            </div>\r\n                        </li>\r\n                        ",7058,9360);
$z[7][4]=array();
$z[7][4]['pagesize']="20";
$z[8]=Array("pagelist","",9503,9574);
$z[8][4]=array();
$z[8][4]['listitem']="info,index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("sql","\r\n                            <li>\r\n                                <p><a target=\"_blank\" href=\"[field:arcurl/]\">[field:title/]</a><br />\r\n                                    帮助人数：[field:helps/]</p>\r\n                                <div class=\"img-part p-a\"> <a target=\"_blank\" href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a> </div>\r\n                            </li>\r\n                            ",11067,11624);
$z[9][4]=array();
$z[9][4]['sql']="select * from `dede_addoninfos` where typeid between 16 and 26 ORDER BY helps DESC limit 0,4";
$z[10]=Array("sql","\r\n                            <li>\r\n                                <p><a target=\"_blank\" href=\"[field:arcurl/]\">[field:title/]</a><br />\r\n                                    帮助人数：[field:helps/]</p>\r\n                                <div class=\"img-part p-a\"> <a target=\"_blank\" href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a> </div>\r\n                            </li>\r\n                            ",11860,12417);
$z[10][4]=array();
$z[10][4]['sql']="select * from `dede_addoninfos` where typeid between 16 and 26 ORDER BY helps DESC limit 0,4";
$z[11]=Array("include","",12606,12643);
$z[11][4]=array();
$z[11][4]['filename']="footer.htm";

?>