<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html>
<html>
<head>
<meta charset="<?php echo $cfg_soft_lang; ?>">
<title><?php echo $cfg_softname; ?></title>
<meta name="renderer" content="webkit">
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
<meta name="apple-mobile-web-app-status-bar-style" content="black">
<meta name="apple-mobile-web-app-capable" content="yes">
<meta name="format-detection" content="telephone=no">
<link rel="stylesheet" href="../publics/layui/css/layui.css" media="all" />
<link rel="stylesheet" href="../publics/iconfont/iconfont.css" media="all" />
<link rel="stylesheet" href="css/admin.css" media="all" />
<script language="javascript" src="js/dedeajax2.js"></script>
<script language="javascript" src="js/ieemu.js"></script>
<script language="javascript" src="js/main.js"></script>
<script language="javascript" src="js/list.js"></script>

</head>
<body class="childrenBody">
<div class="x-nav">
	<span class="layui-breadcrumb">
	  <a href="index_body.php">首页</a>
	  <a><cite><?php echo $GLOBALS['positionname']; ?></cite></a>
	  <a><cite>文档列表</cite></a>
	</span>
	<a class="layui-btn layui-btn-small refresh" href="javascript:location.replace(location.href);" title="刷新"><i class="iconfont icon-refresh" style="line-height:30px"></i></a>
</div>
<div class="layui-mt-10">
	<div class="layui-inline">
		<a class="layui-btn layui-btn-small layui-btn-normal" href="catalog_do.php?channelid=<?php echo $GLOBALS['channelid']; ?>&cid=<?php echo $GLOBALS['cid']; ?>&dopost=addArchives"><i class="layui-icon">&#xe61f;</i>添加文档</a>
	</div>
	<div class="layui-inline">
		<a class="layui-btn layui-btn-small" href="makehtml_archives.php?cid=<?php echo $GLOBALS['cid']; ?>"><i class="layui-icon">&#x1005;</i>更新文档</a>
	</div>
	<form name='form3' action='content_list.php' method='get' class="layui-form layui-form-pane" style="float:right;">
		<input type='hidden' name='dopost' value='listArchives' />
		<div class="layui-form-item">
			<div class="layui-input-inline">
				<select name='cid'>
				<option value='0'>选择栏目...</option>
				<?php echo $GLOBALS['optionarr']; ?>
				</select>
			</div>
			<div class="layui-input-inline">
				<select name='orderby'>
					<option value='id'>排序...</option>
					<option value='pubdate'>更新时间</option>
					<option value='sortrank'>置顶权值</option>
					<option value='click'>点击量</option>
					<option value='scores'>评论积分</option>
					<option value='lastpost'>最后评论</option>
				</select>
				</div>
			<div class="layui-input-inline">
				<select name='flag'>
					<option value=''>属性...</option>
					<?php echo $GLOBALS['flagsArr']; ?>
				</select>
			</div>
			<label class="layui-form-label">关键字</label>
			<div class="layui-input-inline">
				<input type="text" name='keyword' value='<?php echo $GLOBALS['keyword']; ?>' placeholder="标题" autocomplete="off" class="layui-input">
			</div>
			<div class="layui-input-inline" style="width:80px">
				<button class="layui-btn" type="submit"><i class="layui-icon">&#xe615;</i></button>
			</div>
		</div>
	</form>
</div>
<div class="layui-form news_list">
<form name="form2">
	<table class="layui-table">
		<colgroup>
			<col width="60">
			<col width="5%">
			<col>
			<col width="8%">
			<col width="8%">
			<col width="6%">
			<col width="6%">
			<col width="8%">
			<col width="6%">
			<col width="15%">
		</colgroup>
		<thead>
			<tr>
				<th>选择</th>
				<th>ID</th>
				<th style="text-align:left;">文章标题</th>
				<th>发布时间</th>
				<th>所属栏目</th>
				<th>点击</th>
				<th>HTML</th>
				<th>浏览权限</th>
				<th>发布人</th>
				<th>操作</th>
			</tr> 
		</thead>
		<tbody class="news_content">
			<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
			<tr>
				<td><input type="checkbox" name="arcID" id="arcID" value="<?php echo $fields['id']; ?>" lay-ignore></td>
				<td><?php echo $fields['id']; ?></td>
				<td align="left"><a href="archives_do.php?aid=<?php echo $fields['id']; ?>&dopost=editArchives"><?php echo $fields['title']; ?></a> <?php echo IsCommendArchives($fields['flag']); ?></td>
				<td><?php echo GetDateMk($fields['senddate']); ?></td>
				<td><a href="content_list.php?cid=<?php echo $fields['typeid']; ?>"><?php echo GetTypename($fields['typeid']); ?></a></td>
				<td><?php echo $fields['click']; ?></td>
				<td><?php echo IsHtmlArchives($fields['ismake']); ?></td>
				<td><?php echo GetRankName($fields['arcrank']); ?></td>
				<td><?php echo GetMemberName($fields['mid']); ?></td>
				<td>
				<a class="layui-btn layui-btn-mini" href="archives_do.php?aid=<?php echo $fields['id']; ?>&dopost=editArchives"><i class="iconfont icon-edit"></i> 编辑</a>
				<a class="layui-btn layui-btn-normal layui-btn-mini" onClick="QuickEdit(<?php echo $fields['id']; ?>, event, this);"><i class="layui-icon">&#xe631;</i> 属性</a>
				<a class="layui-btn layui-btn-primary layui-btn-mini" onClick="viewArc(<?php echo $fields['id']; ?>);"><i class="layui-icon">&#xe609;</i> 预览</a>
				</td>
			</tr>
			<?php
}
}?>
<tr>
<td align="left" colspan="10" style="padding-left:0;">
	&nbsp;
	<a href="javascript:selAll()" class="layui-btn layui-btn-small">全选</a>
	<a href="javascript:noSelAll()" class="layui-btn layui-btn-small">取消</a>
	<a href="javascript:updateArc(0)" class="layui-btn layui-btn-small">&nbsp;更新&nbsp;</a>
	<a href="javascript:checkArc(0)" class="layui-btn layui-btn-small">&nbsp;审核&nbsp;</a>
	<a href="javascript:adArc(0)" class="layui-btn layui-btn-small">&nbsp;推荐&nbsp;</a>
	<a href="javascript:;" onClick="moveArc(event,this,<?php echo (empty($channelid) ? 0 : $channelid); ?>)" class="layui-btn layui-btn-small">&nbsp;移动&nbsp;</a>
	<a href="javascript:delArc(0)" class="layui-btn layui-btn-small layui-btn-danger">&nbsp;删除&nbsp;</a>
	<?php if($channelid==1) echo "	<a href=\"javascript:kwArc(0)\" class=\"layui-btn layui-btn-small layui-btn-normal\">&nbsp;自动关键字&nbsp;</a>\r\n"; ?>
	<a href="javascript:;" onClick="cAtts('attsAdd',event,this)" class="layui-btn layui-btn-small">&nbsp;增加属性&nbsp;</a>
	<a href="javascript:;" onClick="cAtts('attsDel',event,this)" class="layui-btn layui-btn-small layui-btn-danger">&nbsp;删除属性&nbsp;</a>
</td>
</tr>
		</tbody>
	</table>
</form>
	<div id="page">
		<div class="layui-box layui-laypage layui-laypage-default">
			<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '3';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

		</div>
	</div>
</div>
<script type="text/javascript" src="../publics/layui/layui.js"></script>
<script type="text/javascript" src="js/alllist.js"></script>
</body>
</html>