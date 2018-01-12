/*!CK:1634333410!*//*1459738712,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["Pr1kU"]); }

__d('ReactAbstractContextualDialog',['ContextualDialog','ContextualDialogArrow','LayerAutoFocus','LayerHideOnEscape','LayerRefocusOnHide','React','ReactDOM'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h=c('React').PropTypes,i={createSpec:function(j){return {displayName:j.displayName,propTypes:{position:h.oneOf(['above','below','left','right']),alignment:h.oneOf(['left','center','right']),offsetX:h.number,offsetY:h.number,width:h.number,autoFocus:h.bool,focusContextOnHide:h.bool,arrowBehavior:h.func,behaviors:h.object,shown:h.bool,context:h.object,contextRef:h.func,hoverContext:h.object,hoverContextRef:h.func,hoverShowDelay:h.number,hoverHideDelay:h.number,hideOnEscape:h.bool,insertParent:h.object,onBeforeHide:h.func,onToggle:h.func,hasActionableContext:h.bool},immutableProps:{modal:null},createLayer:function(k){var l=this.props.context||c('ReactDOM').findDOMNode(this.props.contextRef()),m=this.props.hoverContext||this.props.hoverContextRef&&c('ReactDOM').findDOMNode(this.props.hoverContextRef()),n=babelHelpers['extends']({context:l,hoverContext:m,hoverShowDelay:this.props.hoverShowDelay,hoverHideDelay:this.props.hoverHideDelay,position:this.props.position,alignment:this.props.alignment,offsetX:this.props.offsetX,offsetY:this.props.offsetY,width:this.props.width,shouldSetARIAProperties:!this.props.hasActionableContext,arrowBehavior:this.props.arrowBehavior||c('ContextualDialogArrow'),addedBehaviors:this.enumerateBehaviors(this.props.behaviors)},j||{}),o=new (c('ContextualDialog'))(n,k);if(this.props.contextBounds)o.setContextWithBounds(l,this.props.contextBounds);if(this.props.autoFocus!==false)o.enableBehavior(c('LayerAutoFocus'));if(this.props.hideOnEscape===true)o.enableBehavior(c('LayerHideOnEscape'));if(this.props.focusContextOnHide===false)o.disableBehavior(c('LayerRefocusOnHide'));if(this.props.onBeforeHide)o.subscribe('beforehide',this.props.onBeforeHide);if(this.props.insertParent)o.setInsertParent(this.props.insertParent);o.conditionShow(this.props.shown);return o;},receiveProps:function(k,l){this.updateBehaviors(l.behaviors,k.behaviors);var m=k.context||k.contextRef&&c('ReactDOM').findDOMNode(k.contextRef());if(m)if(k.contextBounds){this.layer.setContextWithBounds(m,k.contextBounds);}else this.layer.setContext(m);this.layer.setPosition(k.position).setAlignment(k.alignment).setOffsetX(k.offsetX).setOffsetY(k.offsetY).setWidth(k.width).conditionShow(k.shown);}};}};f.exports=i;},null);
__d('HasLayerContextMixin',['ReactDOM'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h={getContextNode:function(){var i=this.props.context;if(this.props.contextRef){var j=this.props.contextRef();i=j&&c('ReactDOM').findDOMNode(j);}return i;}};f.exports=h;},null);
__d('XUIAmbientNUXBody.react',['cx','React','XUICloseButton.react','joinClasses'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i=c('React').PropTypes,j=c('React').createClass({displayName:'XUIAmbientNUXBody',propTypes:{onCloseButtonClick:i.func},render:function(){var k=c('joinClasses')("_21es",this.props.className);return (c('React').createElement('div',{className:k},c('React').createElement(c('XUICloseButton.react'),{shade:'light',className:"_36gl",onClick:this.props.onCloseButtonClick}),c('React').createElement('div',{className:"_36gn"},this.props.children)));}});f.exports=j;},null);
__d('XUIAmbientNUXTheme',['cx'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i={wrapperClassName:"_2x6q",arrowDimensions:{offset:14,length:18}};f.exports=i;},null);
__d('XUIAmbientNUX.react',['HasLayerContextMixin','React','ReactLayer','ReactAbstractContextualDialog','XUIAmbientNUXTheme','XUIAmbientNUXBody.react'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h=c('React').PropTypes,i=300,j=380,k=c('ReactLayer').createClass(c('ReactAbstractContextualDialog').createSpec({displayName:'XUIAmbientNUX',theme:c('XUIAmbientNUXTheme')})),l=c('React').createClass({displayName:'XUIAmbientNUX',propTypes:{alignment:h.oneOf(['left','center','right']),behaviors:h.object,context:h.object,contextRef:h.func,customwidth:h.number,hasActionableContext:h.bool,insertParent:h.object,offsetX:h.number,offsetY:h.number,onCloseButtonClick:h.func,position:h.oneOf(['above','below','left','right']),shown:h.bool,width:h.oneOf(['wide','normal','auto','custom'])},_getWidth:function(){switch(this.props.width){case 'wide':return j;case 'custom':return this.props.customwidth;case 'auto':return null;default:return i;}},render:function(){return (c('React').createElement(k,{alignment:this.props.alignment,autoFocus:false,behaviors:this.props.behaviors,context:this.props.context,contextRef:this.props.contextRef,focusContextOnHide:false,hasActionableContext:this.props.hasActionableContext,insertParent:this.props.insertParent,offsetX:this.props.offsetX,offsetY:this.props.offsetY,position:this.props.position,shown:this.props.shown,width:this._getWidth(this.props)},c('React').createElement(c('XUIAmbientNUXBody.react'),{onCloseButtonClick:this.props.onCloseButtonClick},this.props.children)));}});f.exports=l;},null);
__d('XUIContextualDialogBody.react',['React'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h=c('React').createClass({displayName:'XUIContextualDialogBody',render:function(){return (c('React').createElement('div',{className:this.props.className},this.props.children));}});f.exports=h;},null);
__d('XUIContextualDialogFooter.react',['cx','React','XUIOverlayFooter.react'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i=c('React').createClass({displayName:'XUIContextualDialogFooter',render:function(){return (c('React').createElement(c('XUIOverlayFooter.react'),{className:"_572u"},this.props.children));}});f.exports=i;},null);
__d('XUIContextualDialogTitle.react',['cx','React','joinClasses'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i=c('React').PropTypes,j=c('React').createClass({displayName:'XUIContextualDialogTitle',propTypes:{use:i.oneOf(['primary','secondary'])},getDefaultProps:function(){return {use:'primary'};},render:function(){var k=this.props.use,l=c('joinClasses')("_47lu"+(k==='primary'?' '+"_47lv":'')+(k==='secondary'?' '+"_47mc":''),this.props.className);return (c('React').createElement('h3',{className:l},this.props.children));}});f.exports=j;},null);
__d('XUIContextualDialog.react',['cx','HasLayerContextMixin','ContextualDialogXUITheme','React','ReactAbstractContextualDialog','ReactLayer','XUIContextualDialogBody.react','XUIContextualDialogFooter.react','XUIContextualDialogTitle.react'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i=c('React').PropTypes,j=c('ReactLayer').createClass(c('ReactAbstractContextualDialog').createSpec({displayName:'ReactXUIContextualDialog',theme:c('ContextualDialogXUITheme')})),k=c('React').createClass({displayName:'XUIContextualDialog',propTypes:{position:i.oneOf(['above','below','left','right']),alignment:i.oneOf(['left','center','right']),offsetX:i.number,offsetY:i.number,width:i.number,autoFocus:i.bool,arrowBehavior:i.func,behaviors:i.object,shown:i.bool,context:i.object,contextRef:i.func,hoverContext:i.object,hoverContextRef:i.func,hoverShowDelay:i.number,hoverHideDelay:i.number,hideOnEscape:i.bool,onToggle:i.func,hasActionableContext:i.bool},getDefaultProps:function(){return {hasActionableContext:false,hideOnEscape:true};},_getDialogBody:function(){return this._getChildOfType(c('XUIContextualDialogBody.react'));},_getDialogTitle:function(){return this._getChildOfType(c('XUIContextualDialogTitle.react'));},_getDialogFooter:function(){return this._getChildOfType(c('XUIContextualDialogFooter.react'));},_getChildOfType:function(l){var m=null;c('React').Children.forEach(this.props.children,function(n){if(!m&&n.type===l)m=n;});return m;},updatePosition:function(){var l=this.refs.dialog;if(l)l.layer.updatePosition();},render:function(){var l=this.props.children,m=this._getDialogBody();if(m)l=c('React').createElement('div',{className:"_53iv"},this._getDialogTitle(),m);return (c('React').createElement(j,babelHelpers['extends']({},this.props,{ref:'dialog'}),l,m?this._getDialogFooter():null));}});k.WIDTH={NORMAL:312,WIDE:400};f.exports=k;},null);