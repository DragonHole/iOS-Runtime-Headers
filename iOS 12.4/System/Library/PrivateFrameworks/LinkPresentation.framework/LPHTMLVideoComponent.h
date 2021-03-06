/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class LPVideo, DOMElement, DOMHTMLVideoElement, DOMHTMLIFrameElement, WebScriptObject, NSString;

@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener> {

	LPVideo* _video;
	DOMElement* _playButton;
	DOMElement* _muteButton;
	DOMElement* _muteButtonContainer;
	DOMElement* _videoPosterFrame;
	DOMElement* _videoOverlay;
	DOMHTMLVideoElement* _videoElement;
	DOMHTMLIFrameElement* _youTubeContainerElement;
	BOOL _isVisible;
	BOOL _wasPlayingWhenHidden;
	WebScriptObject* _isVisibleFunction;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
-(BOOL)shouldAutoPlay;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6 ;
-(void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2 ;
-(id)createVideoElement;
-(id)resolvedVideoElement;
-(id)youTubeParametersForVideoURL:(id)arg1 ;
-(void)togglePlaying;
-(void)updateVisibility;
-(BOOL)isVisible;
-(void)play;
-(BOOL)isPlaying;
-(void)handleEvent:(id)arg1 ;
-(void)pause;
@end

