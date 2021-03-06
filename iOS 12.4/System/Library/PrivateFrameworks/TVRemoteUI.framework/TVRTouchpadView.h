/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class TVRTouchProcessor, _TVRButtonHaptic;

@interface TVRTouchpadView : UIView {

	BOOL _highlighted;
	/*^block*/id _configurationHandler;
	TVRTouchProcessor* _touchProcessor;
	_TVRButtonHaptic* _haptic;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) TVRTouchProcessor * touchProcessor;              //@synthesize touchProcessor=_touchProcessor - In the implementation block
@property (nonatomic,retain) _TVRButtonHaptic * haptic;                              //@synthesize haptic=_haptic - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,copy) id configurationHandler;                                  //@synthesize configurationHandler=_configurationHandler - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                             //@synthesize contentInsets=_contentInsets - In the implementation block
-(_TVRButtonHaptic *)haptic;
-(void)setHaptic:(_TVRButtonHaptic *)arg1 ;
-(void)setTouchProcessor:(TVRTouchProcessor *)arg1 ;
-(TVRTouchProcessor *)touchProcessor;
-(void)_notifyConfigurationHandler:(BOOL)arg1 ;
-(id)configurationHandler;
-(void)setConfigurationHandler:(id)arg1 ;
-(BOOL)isHighlighted;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)_init;
@end

