/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, UILabel, UIView, NSString;

@interface ICPasswordLockTileView : UIView <CAAnimationDelegate> {

	BOOL _isLocked;
	CALayer* _lockHandle;
	CALayer* _lockBase;
	CALayer* _lockGroupLayer;
	CALayer* _backdropLayer;
	UILabel* _label;
	UIView* _containerView;
	/*^block*/id _fadeInCompletionHandler;
	/*^block*/id _fadeOutCompletionHandler;

}

@property (nonatomic,retain) CALayer * lockHandle;                       //@synthesize lockHandle=_lockHandle - In the implementation block
@property (nonatomic,retain) CALayer * lockBase;                         //@synthesize lockBase=_lockBase - In the implementation block
@property (nonatomic,retain) CALayer * lockGroupLayer;                   //@synthesize lockGroupLayer=_lockGroupLayer - In the implementation block
@property (nonatomic,retain) CALayer * backdropLayer;                    //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) BOOL isLocked;                              //@synthesize isLocked=_isLocked - In the implementation block
@property (nonatomic,copy) id fadeInCompletionHandler;                   //@synthesize fadeInCompletionHandler=_fadeInCompletionHandler - In the implementation block
@property (nonatomic,copy) id fadeOutCompletionHandler;                  //@synthesize fadeOutCompletionHandler=_fadeOutCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lockTileView;
-(void)setIsLocked:(BOOL)arg1 ;
-(CALayer *)lockBase;
-(void)setLockGroupLayer:(CALayer *)arg1 ;
-(void)setLockHandle:(CALayer *)arg1 ;
-(void)setLockBase:(CALayer *)arg1 ;
-(void)setFadeInCompletionHandler:(id)arg1 ;
-(CALayer *)lockHandle;
-(id)fadeAnimationWithStartAlpha:(double)arg1 endAlpha:(double)arg2 beginTime:(double)arg3 duration:(double)arg4 ;
-(void)setFadeOutCompletionHandler:(id)arg1 ;
-(id)lockAnimationWithBeginTime:(double)arg1 ;
-(id)unLockAnimationWithBeginTime:(double)arg1 ;
-(CALayer *)lockGroupLayer;
-(id)fadeInCompletionHandler;
-(id)fadeOutCompletionHandler;
-(void)showFadeInAnimationForActivityType:(unsigned long long)arg1 afterDelay:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showFadeOutAnimationForActivityType:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CALayer *)backdropLayer;
-(void)setBackdropLayer:(CALayer *)arg1 ;
-(BOOL)isLocked;
-(void)awakeFromNib;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

