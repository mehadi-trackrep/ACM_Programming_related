/*!CK:2363825740!*//*1459692253,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["hDVs3"]); }

__d('NotificationImpressions',['AsyncSignal','NotificationTokens','URI'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h='/ajax/notifications/impression.php';function i(j,k){var l={ref:k};c('NotificationTokens').untokenizeIDs(j).forEach(function(m,n){l['alert_ids['+n+']']=m;});new (c('AsyncSignal'))(new (c('URI'))(h).getQualifiedURI().toString(),l).send();}f.exports={log:i};},null);
__d('NotificationBeeperConst',['keyMirror'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h={IDLE_DELAY:10000,ACTIVE_DELAY_LONG:4000,FADE_OUT_LENGTH:1500,BeepStates:c('keyMirror')({PENDING:true,RENDERED:true,READY_TO_HIDE:true,FADING_OUT:true})};f.exports=h;},null);
__d('NotificationBeeperItemContents.react',['cx','Animation','AsyncRequest','Bootloader','FBProfilePhotoShadow.react','Image.react','ImageBlock.react','NotificationBeeperItemCloseButton.react','NotificationURI','NotificationUserActions','React','ReactDOM','TextWithEntities.react','Timestamp.react'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();function i(k,l){return c('React').createElement('span',{className:'fwb'},k);}var j=c('React').createClass({displayName:'NotificationBeeperItemContents',_markAsRead:function(){c('NotificationUserActions').markNotificationsAsRead([this.props.beep.notificationID]);},_onClick:function(k){this._markAsRead();this.props.onHide();if(k.button===1||k.altKey||k.ctrlKey||k.metaKey||k.shiftKey)return;var l=this.props.beep;if(c('NotificationURI').isAlbumDraftRecoveryDialogURI(l.link)){new (c('AsyncRequest'))(l.link).send();k.preventDefault();}else if(l.photo&&c('NotificationURI').snowliftable(l.link)){c('Bootloader').loadModules(["PhotoSnowlift"],function(m){m.bootstrap(l.link,k.currentTarget);});k.preventDefault();}else if(l.ajaxifyLink){c('Bootloader').loadModules(["AsyncDialog"],function(m){m.bootstrap(l.ajaxifyLink,k.currentTarget,'dialog');});k.preventDefault();}},_onClose:function(){this._markAsRead();this.props.onHide();},_doFlash:function(){new (c('Animation'))(c('ReactDOM').findDOMNode(this.refs.inner)).from('opacity','0').to('opacity','1').duration(200).go();},componentDidMount:function(){this.props.onReadyToHide(this.props.beep.notificationID);},componentDidUpdate:function(k){if(k.beep.beepID!==this.props.beep.beepID){this._doFlash();this.props.onReadyToHide(this.props.beep.notificationID);}},render:function(){var k=this.props.beep;return (c('React').createElement('div',{ref:'inner'},c('React').createElement(c('NotificationBeeperItemCloseButton.react'),{onClick:this._onClose}),c('React').createElement('a',{href:k.link,onClick:this._onClick,className:"_3soi"},c('React').createElement(c('ImageBlock.react'),{className:"_3soj",spacing:'medium'},c('React').createElement(c('FBProfilePhotoShadow.react'),{className:"_2yt7"},c('React').createElement(c('Image.react'),{src:k.actors[0].profile_picture.uri,className:"_3sok"})),c('React').createElement('div',{className:"_3sol"},c('React').createElement(c('TextWithEntities.react'),{renderEmoticons:true,renderEmoji:true,interpolator:i,ranges:k.text.ranges,aggregatedranges:k.text.aggregated_ranges,text:k.text.text}),c('React').createElement(c('ImageBlock.react'),{className:"_3som"},c('React').createElement(c('Image.react'),{className:"_1x8t",src:k.icon.uri}),c('React').createElement(c('Timestamp.react'),{time:k.timestamp.time,text:k.timestamp.text,verbose:k.timestamp.verbose})))))));}});f.exports=j;},null);
__d('NotificationBeeperItem.react',['cx','Animation','BrowserSupport','NotificationBeeperConst','NotificationBeeperItemContents.react','NotificationBeeperItemRenderersList','React','ReactDOM','Style','setTimeoutAcrossTransitions'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i=c('NotificationBeeperConst').FADE_OUT_LENGTH,j=c('React').createClass({displayName:'NotificationBeeperItem',getInitialState:function(){return {fadedIn:false,hidden:false};},componentDidMount:function(){var k;if(c('BrowserSupport').hasCSSAnimations()){k=this.setState.bind(this,{fadedIn:true},null);}else k=function(){new (c('Animation'))(c('ReactDOM').findDOMNode(this.refs.item)).from('top','-30px').from('opacity','0').to('top','0px').to('opacity','1').duration(200).ondone(this.setState.bind(this,{fadedIn:true},null)).go();}.bind(this);c('setTimeoutAcrossTransitions')(k,50);this.props.onInserted(this.props.beep);},componentWillUnmount:function(){if(this._fadeOutAnimation){this._fadeOutAnimation.stop();this._fadeOutAnimation=null;}},_onHide:function(){this.setState({hidden:true});},render:function(){var k=this.props.beep,l="_3sod"+(this.state.fadedIn?' '+"_3soe":'')+(this.state.hidden?' '+"hidden_elem":''),m=this._getRenderer(k.beepRenderer);return (c('React').createElement('li',{className:l,ref:'item','data-gt':k.tracking},c('React').createElement(m,{beep:k,onHide:this._onHide,onReadyToHide:this.props.onReadyToHide,ref:'itemContents'})));},componentDidUpdate:function(k,l,m){if(this.props.fadingOut){if(!this._fadeOutAnimation)this._fadeOutAnimation=new (c('Animation'))(c('ReactDOM').findDOMNode(this.refs.item)).from('opacity','1').to('opacity','0').duration(i).ondone(this._onHide).go();c('ReactDOM').findDOMNode(this.refs.item).style.transitionDuration='0ms';}else if(this._fadeOutAnimation){this._fadeOutAnimation.stop();this._fadeOutAnimation=null;c('Style').set(c('ReactDOM').findDOMNode(this.refs.item),'opacity','1');}},_getRenderer:function(k){if(k in c('NotificationBeeperItemRenderersList'))return c('NotificationBeeperItemRenderersList')[k];return c('NotificationBeeperItemContents.react');}});f.exports=j;},null);
__d('NotificationSound',['Sound'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h=5000;c('Sound').init(['audio/mpeg']);function i(j){this._soundPath=j;this._lastPlayed=0;}Object.assign(i.prototype,{play:function(j){if(!this._soundPath)return;var k=Date.now();if(k-this._lastPlayed<h)return;this._lastPlayed=k;c('Sound').playOnlyIfImmediate(this._soundPath,j);}});f.exports=i;},null);
__d('NotificationBeeper.react',['cx','Arbiter','ChannelConstants','NotificationBeeperConst','NotificationBeeperItem.react','NotificationBeeperPinnedPostLoader','NotificationConstants','NotificationImpressions','NotificationPhotoThumbnail','NotificationSound','NotificationUpdates','NotificationURI','NotificationUserActions','React','setTimeoutAcrossTransitions','shield'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i=c('NotificationBeeperConst').ACTIVE_DELAY_LONG,j=c('NotificationBeeperConst').BeepStates,k=c('NotificationBeeperConst').FADE_OUT_LENGTH,l=c('NotificationBeeperConst').IDLE_DELAY,m=c('NotificationBeeperPinnedPostLoader').payload,n='beeper',o=c('NotificationConstants').PayloadSourceType.LIVE_SEND,p=c('NotificationConstants').PayloadSourceType.OTHER_APPLICATION,q=c('React').createClass({displayName:'NotificationBeeper',getInitialState:function(){return {soundEnabled:this.props.soundEnabled,hovering:false,fading:false,beeps:{}};},componentWillMount:function(){var r=c('ChannelConstants').getArbiterType('notif_sound_pref_changed'),s='update-notifications';this.subscriptions=[c('NotificationUpdates').subscribe(s,function(t,u){if(u.payloadsource===o||u.payloadsource===p){var v=u.nodes;if(v&&v.length)this._handleBeepChanges(this._convertNotifications(v));}}.bind(this)),c('Arbiter').subscribe(r,function(t,u){this.setState({soundEnabled:u.obj.enabled});}.bind(this))];c('Arbiter').inform('NotificationBeeper/mounted',null,c('Arbiter').BEHAVIOR_PERSISTENT);if(m)this._handleBeepChanges(this._convertNotifications(m.nodes));},componentWillUnmount:function(){this.subscriptions.forEach(function(r){r.unsubscribe();});this.subscriptions=null;},_onMouseEnter:function(){this._hideWait&&clearTimeout(this._hideWait);var r=[],s=this.state.beeps;Object.keys(s).forEach(function(t){if(s[t].state!=j.PENDING){r.push(t);}else s[t].state=j.RENDERED;});c('NotificationUserActions').markNotificationsAsSeen(r);this.setState({hovering:true,fading:false,beeps:s});},_onMouseLeave:function(){this._waitToHide(i);this.setState({hovering:false});},_onInsertedItem:function(r){if(!this.state.hovering)this._waitToHide();if(this.state.soundEnabled&&r.sound){if(!this._notifSound)this._notifSound=new (c('NotificationSound'))(this.props.soundPath);this._notifSound.play(r.beepID);}if(this.props.shouldLogImpressions)c('NotificationImpressions').log([r.notificationID],n);},_waitToHide:function(r){this._hideWait&&clearTimeout(this._hideWait);this._hideWait=c('setTimeoutAcrossTransitions')(c('shield')(this._hide,this),r||l);},_onReadyToHide:function(r){this.state.beeps[r].state=j.READY_TO_HIDE;if(!this._hideWait)this._waitToHide();},_hide:function(){this._hideWait=null;var r=this.state.beeps;Object.keys(r).forEach(function(s){if(r[s].state==j.READY_TO_HIDE)r[s].state=j.FADING_OUT;});this.setState({fading:true});c('setTimeoutAcrossTransitions')(c('shield')(this._finishHide,this),k);},_finishHide:function(){if(!this.state.fading)return;var r=this.state.beeps;Object.keys(r).forEach(function(s){if(r[s].state==j.FADING_OUT)delete r[s];});this.setState({fading:false,beeps:r});c('setTimeoutAcrossTransitions')(function(){var s=this.state.beeps;Object.keys(s).forEach(function(t){if(s[t].state==j.PENDING)s[t].state=j.RENDERED;});this.setState({beeps:s});}.bind(this));},_handleBeepChanges:function(r){var s=this.state.fading?j.PENDING:j.RENDERED,t=this.state.beeps,u=false;Object.keys(r).reverse().forEach(function(v){var w={state:s,data:r[v]};if(!t[v]||t[v].data.beepID!=w.data.beepID){if(t[v]){u=true;if(w.data.beepUpdatesOnTop)delete t[v];}t[v]=w;}});if(u)this._waitToHide();this.forceUpdate();},render:function(){var r=this.state.beeps,s=[];Object.keys(r).reverse().forEach(function(v){var w=r[v];if(w.state==j.PENDING)return;s.push(c('React').createElement(c('NotificationBeeperItem.react'),{key:v,fadingOut:this.state.fading&&w.state==j.FADING_OUT,beep:w.data,onInserted:this._onInsertedItem,onReadyToHide:this._onReadyToHide}));},this);var t=s.length>0,u=(!t?"hidden_elem":'')+(' '+"_50d1");return (c('React').createElement('ul',{ref:'container',className:u,'data-gt':this.props.tracking,onMouseEnter:this._onMouseEnter,onMouseLeave:this._onMouseLeave},s));},_convertNotifications:function(r){var s={};r.forEach(function(t){if(!t.showBeep||!t.alert_id)return;var u=t.alert_id,v=u+'-'+t.receivedTime,w=c('NotificationPhotoThumbnail').getThumbnail(t.attachments,t.attached_story);s[u]={notificationID:u,notifID:t.id,beepID:v,beepRenderer:t.beepRenderer,rendererData:t.rendererData,beepUpdatesOnTop:t.beepUpdatesOnTop,actors:t.unaggregatedActors||t.actors,icon:t.icon,link:t.url?c('NotificationURI').localize(t.url):'#',url:t.url,ajaxifyLink:t.ajaxify_url,photo:w,text:t.unaggregatedTitle||t.title,timestamp:t.timestamp,receivedTime:t.receivedTime,sound:!!t.sound,tracking:t.tracking};});return s;}});f.exports=q;},null);