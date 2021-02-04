/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/ADPrerollTopBarDelegate.h>
#import <libobjc.A.dylib/ADPrerollBottomBarDelegate.h>

@protocol ADPrerollViewDelegate;
@class ADPrerollTopBar, ADPrerollBottomBar, UIImageView, NSTimer, ADPrivacyMarker, NSString;

@interface ADPrerollView : UIView <UIGestureRecognizerDelegate, ADPrerollTopBarDelegate, ADPrerollBottomBarDelegate> {

	id<ADPrerollViewDelegate> _delegate;
	BOOL _barsVisible;
	BOOL _hasAction;
	BOOL _skipButtonCountingDown;
	ADPrerollTopBar* _topBar;
	ADPrerollBottomBar* _bottomBar;
	UIImageView* _swooshView;
	NSTimer* _passiveWatchingTimer;
	double _accumulatedViewingTime;
	ADPrivacyMarker* _privacyMarker;

}

@property (nonatomic,retain) ADPrerollTopBar * topBar;                               //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,retain) ADPrerollBottomBar * bottomBar;                         //@synthesize bottomBar=_bottomBar - In the implementation block
@property (assign,nonatomic) BOOL skipButtonCountingDown;                            //@synthesize skipButtonCountingDown=_skipButtonCountingDown - In the implementation block
@property (nonatomic,retain) UIImageView * swooshView;                               //@synthesize swooshView=_swooshView - In the implementation block
@property (nonatomic,retain) NSTimer * passiveWatchingTimer;                         //@synthesize passiveWatchingTimer=_passiveWatchingTimer - In the implementation block
@property (assign,nonatomic) double accumulatedViewingTime;                          //@synthesize accumulatedViewingTime=_accumulatedViewingTime - In the implementation block
@property (nonatomic,retain) ADPrivacyMarker * privacyMarker;                        //@synthesize privacyMarker=_privacyMarker - In the implementation block
@property (assign,nonatomic,__weak) id<ADPrerollViewDelegate> delegate; 
@property (assign,nonatomic) BOOL barsVisible;                                       //@synthesize barsVisible=_barsVisible - In the implementation block
@property (assign,nonatomic) BOOL hasAction;                                         //@synthesize hasAction=_hasAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)shutdown;
-(void)setPrivacyMarker:(ADPrivacyMarker *)arg1 ;
-(ADPrivacyMarker *)privacyMarker;
-(void)enablePrivacyButton;
-(void)_privacyButtonWasTapped;
-(void)fadeToBlackWithCompletion:(/*^block*/id)arg1 ;
-(void)attachToAVPlayer:(id)arg1 showiAdBrandingSwoosh:(BOOL)arg2 ;
-(void)beginCountdown:(double)arg1 ;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
-(void)displayAsPaused:(BOOL)arg1 ;
-(void)topBarScaleToFill:(id)arg1 ;
-(void)topBarScaleToFit:(id)arg1 ;
-(void)topBarDoneButtonTapped:(id)arg1 ;
-(BOOL)_layoutForExpandedSize;
-(double)accumulatedViewingTime;
-(BOOL)skipButtonCountingDown;
-(void)setSkipButtonCountingDown:(BOOL)arg1 ;
-(void)setAccumulatedViewingTime:(double)arg1 ;
-(void)bottomBarActionButtonTapped:(id)arg1 ;
-(void)bottomBarSkipButtonTapped:(id)arg1 ;
-(void)bottomBarPauseButtonTapped:(id)arg1 ;
-(void)bottomBarPlayButtonTapped:(id)arg1 ;
-(void)setSwooshView:(UIImageView *)arg1 ;
-(UIImageView *)swooshView;
-(void)_singleTapGestureRecognized:(id)arg1 ;
-(void)setBarsVisible:(BOOL)arg1 ;
-(NSTimer *)passiveWatchingTimer;
-(void)_firePassiveWatchingTimer:(id)arg1 ;
-(void)setPassiveWatchingTimer:(NSTimer *)arg1 ;
-(BOOL)barsVisible;
-(void)_restartPassiveWatchingTimer;
-(void)setTopBar:(ADPrerollTopBar *)arg1 ;
-(ADPrerollTopBar *)topBar;
-(ADPrerollBottomBar *)bottomBar;
-(void)setBottomBar:(ADPrerollBottomBar *)arg1 ;
-(void)dealloc;
-(BOOL)accessibilityPerformEscape;
-(void)setDelegate:(id<ADPrerollViewDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<ADPrerollViewDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
@end
