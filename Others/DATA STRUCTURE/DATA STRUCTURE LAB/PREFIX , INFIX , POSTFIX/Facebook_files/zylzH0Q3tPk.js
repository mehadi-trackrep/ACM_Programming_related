/*!CK:4125576569!*//*1459901553,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["Xz0ZX"]); }

__d('VideoWatchAndScrollEndScreen.react',['cx','fbt','ix','AbstractButton.react','Image.react','React','ReactCSSTransitionGroup','VideoWatchAndScrollNextPreview.react'],function a(b,c,d,e,f,g,h,i,j){if(c.__markCompiled)c.__markCompiled();var k=c('React').PropTypes,l=c('React').createClass({displayName:'VideoWatchAndScrollEndScreen',propTypes:{fadeOut:k.bool,nextVideoMetadata:k.object.isRequired,onReplay:k.func.isRequired},render:function(){var m=c('React').createElement(c('Image.react'),{className:"_5i0o",src:j('/images/video/player/embedded_controls/icons/replay.png')}),n=i._("Replay"),o=this.props.nextVideoMetadata;return (c('React').createElement('div',{className:"_5qdn"+(' '+"_2se8")+(this.props.fadeOut?' '+"_2gud":'')},!!o.thumbnail&&c('React').createElement(c('VideoWatchAndScrollNextPreview.react'),{fadeOut:this.props.fadeOut,owner:o.owner,thumbnail:o.thumbnail,viewCount:o.viewCount}),c('React').createElement(c('ReactCSSTransitionGroup'),{transitionAppear:true,transitionAppearTimeout:0,transitionEnter:false,transitionLeave:false,transitionName:{appear:"_12mz",appearActive:"_12m-"}},c('React').createElement('span',{className:"_5qdx _2se8"},c('React').createElement(c('AbstractButton.react'),{'aria-label':n,className:"_5qdy",image:m,onClick:this.props.onReplay,tabIndex:'0',type:'button'})))));}});f.exports=l;},null);