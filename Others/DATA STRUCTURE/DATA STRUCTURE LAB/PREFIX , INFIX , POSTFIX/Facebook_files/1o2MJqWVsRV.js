/*!CK:512573931!*//*1459748102,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["Djx\/P"]); }

__d('PopoverAsyncMenu.react',['cx','CSS','InlineBlock.react','MenuTheme','Popover','PopoverAsyncMenu','PopoverLoadingMenu','PopoverMenu.react','React','ReactDOM','URI','joinClasses'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i=c('React').PropTypes,j=c('React').createClass({displayName:'ReactPopoverAsyncMenu',statics:{getButtonSize:c('PopoverMenu.react').getButtonSize},propTypes:{alignh:i.oneOf(['left','center','right']),alignv:i.oneOf(['baseline','bottom','middle','top']),position:i.oneOf(['above','below','left','right']),layerBehaviors:i.array,loadingMenu:i.instanceOf(c('PopoverLoadingMenu')),disabled:i.bool,endpoint:i.oneOfType([i.string.isRequired,i.instanceOf(c('URI')).isRequired]),endpointData:i.object,onShow:i.func,onHide:i.func},getDefaultProps:function(){return {alignv:'middle',loadingMenu:new (c('PopoverLoadingMenu'))({theme:c('MenuTheme')})};},componentDidMount:function(){var k=c('ReactDOM').findDOMNode(this.refs.root),l=k.firstChild;c('CSS').addClass(l,"_p");this._popover=new (c('Popover'))(k,l,this.props.layerBehaviors,{alignh:this.props.alignh,position:this.props.position,disabled:this.props.disabled});if(this.props.onShow)this._popover.subscribe('show',this.props.onShow);if(this.props.onHide)this._popover.subscribe('hide',this.props.onHide);this._popoverMenu=this._createPopoverMenu();},componentDidUpdate:function(k){if(this.props.alignh!==k.alignh)this._popoverMenu.getPopover().getLayer().setAlignment(this.props.alignh);if(this.props.disabled!==k.disabled)if(this.props.disabled){this._popoverMenu.disable();}else this._popoverMenu.enable();if(this.props.endpoint.toString()!==k.endpoint.toString()){this.hidePopover();this._popoverMenu=this._createPopoverMenu();}},render:function(){var k=c('React').Children.map(this.props.children,function(l,m){if(m===0){return c('React').cloneElement(l,{className:c('joinClasses')(l.props.className,"_p")});}else return l;});return (c('React').createElement(c('InlineBlock.react'),babelHelpers['extends']({},this.props,{className:c('joinClasses')(this.props.className,"uiPopover"),ref:'root',disabled:null}),k));},componentWillUnmount:function(){this.hidePopover();},getPopoverMenu:function(){return this._popoverMenu;},_createPopoverMenu:function(){var k=c('ReactDOM').findDOMNode(this.refs.root),l=k.firstChild;return new (c('PopoverAsyncMenu'))(this._popover,l,this.props.loadingMenu,this.props.endpoint,this.props.behaviors,this.props.endpointData);},getMenu:function(){return this._popoverMenu.getMenu();},showPopover:function(k){this._popover.showLayer();if(k){var l=this._popoverMenu.getMenu();l.blur();l.focusAnItem(k);}},hidePopover:function(){var k=this._popover;if(k&&k.isShown())k.hideLayer();},getFocusedItem:function(){var k=this._popoverMenu.getMenu();return k.getFocusedItem();}});f.exports=j;},null);
__d('UFIShareNowMenu.react',['ContextualDialogArrow','ContextualLayerAsyncRelative','ContextualLayerAutoFlip','PopoverAsyncMenu.react','React','ShareNowController','UFIShareLink.react'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h=c('React').PropTypes,i=c('React').createClass({displayName:'UFIShareNowMenu',propTypes:{focusOnInit:h.bool,openOnInit:h.bool},_mountWithMenu:function(j){if(!j)return;var k=j.getPopoverMenu();c('ShareNowController').initMenu(k);if(this.props.focusOnInit)k.getTriggerElem().focus();if(this.props.openOnInit)k.getTriggerElem().click();},render:function(){var j=this.props,k=j.endpoint,l=j.endpointData,m=j.onShow,n=j.onHide;return (c('React').createElement(c('PopoverAsyncMenu.react'),{alignv:'baseline',endpoint:k,endpointData:l,onShow:m,onHide:n,layerBehaviors:[c('ContextualLayerAutoFlip'),c('ContextualDialogArrow'),c('ContextualLayerAsyncRelative')],ref:this._mountWithMenu},c('React').createElement(c('UFIShareLink.react'),{href:'#'})));}});f.exports=i;},null);