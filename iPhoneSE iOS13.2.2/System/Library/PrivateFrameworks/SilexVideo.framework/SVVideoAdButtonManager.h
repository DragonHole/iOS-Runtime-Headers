/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoTransitionObserver.h>
#import <libobjc.A.dylib/SVVideoControlVisibilityItem.h>

@protocol SVCustomControlsViewProviding, SVVideoLoadingStateObserverFactory, SVVideoLoadingStateObserving, SVVideoAdActionAvailabilityObserverFactory, SVVideoAdActionAvailabilityObserver, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoViewControllerSizeObserving;
@class SVAdPrivacyButton, SVLearnMoreButton, SVVideoAdSkipButton, NSLayoutConstraint, NSMutableArray, NSString;

@interface SVVideoAdButtonManager : NSObject <SVVideoTransitionObserver, SVVideoControlVisibilityItem> {

	BOOL _transportControlsHidden;
	id<SVCustomControlsViewProviding> _customControlsViewProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;
	id<SVVideoAdActionAvailabilityObserverFactory> _adActionAvailabilityObserverFactory;
	id<SVVideoAdActionAvailabilityObserver> _adActionAvailabilityObserver;
	id<SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
	id<SVVideoSkipLockObserving> _skipLockObserver;
	SVAdPrivacyButton* _privacyButton;
	SVLearnMoreButton* _learnMoreButton;
	SVVideoAdSkipButton* _skipButton;
	long long _constraintsMode;
	NSLayoutConstraint* _learnMorePrimaryTopConstraint;
	NSLayoutConstraint* _learnMorePrimaryLeadingConstraint;
	NSLayoutConstraint* _learnMoreSecondaryTopConstraint;
	NSLayoutConstraint* _learnMoreSecondaryLeadingConstraint;
	NSLayoutConstraint* _privacyAboveTransportControlsConstraint;
	NSLayoutConstraint* _privacyAboveAccessoryBarConstraint;
	NSMutableArray* _alwaysActiveConstraints;
	id<SVVideoViewControllerSizeObserving> _sizeObserver;

}

@property (nonatomic,readonly) id<SVCustomControlsViewProviding> customControlsViewProvider;                                    //@synthesize customControlsViewProvider=_customControlsViewProvider - In the implementation block
@property (assign,getter=areTransportControlsHidden,nonatomic) BOOL transportControlsHidden;                                    //@synthesize transportControlsHidden=_transportControlsHidden - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                              //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,retain) id<SVVideoLoadingStateObserving> loadingStateObserver;                                             //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoAdActionAvailabilityObserverFactory> adActionAvailabilityObserverFactory;              //@synthesize adActionAvailabilityObserverFactory=_adActionAvailabilityObserverFactory - In the implementation block
@property (nonatomic,retain) id<SVVideoAdActionAvailabilityObserver> adActionAvailabilityObserver;                              //@synthesize adActionAvailabilityObserver=_adActionAvailabilityObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipLockObserverFactory> skipLockObserverFactory;                                      //@synthesize skipLockObserverFactory=_skipLockObserverFactory - In the implementation block
@property (nonatomic,retain) id<SVVideoSkipLockObserving> skipLockObserver;                                                     //@synthesize skipLockObserver=_skipLockObserver - In the implementation block
@property (nonatomic,readonly) SVAdPrivacyButton * privacyButton;                                                               //@synthesize privacyButton=_privacyButton - In the implementation block
@property (nonatomic,readonly) SVLearnMoreButton * learnMoreButton;                                                             //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,readonly) SVVideoAdSkipButton * skipButton;                                                                //@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic) long long constraintsMode;                                                                         //@synthesize constraintsMode=_constraintsMode - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * learnMorePrimaryTopConstraint;                                                //@synthesize learnMorePrimaryTopConstraint=_learnMorePrimaryTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * learnMorePrimaryLeadingConstraint;                                            //@synthesize learnMorePrimaryLeadingConstraint=_learnMorePrimaryLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * learnMoreSecondaryTopConstraint;                                              //@synthesize learnMoreSecondaryTopConstraint=_learnMoreSecondaryTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * learnMoreSecondaryLeadingConstraint;                                          //@synthesize learnMoreSecondaryLeadingConstraint=_learnMoreSecondaryLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * privacyAboveTransportControlsConstraint;                                      //@synthesize privacyAboveTransportControlsConstraint=_privacyAboveTransportControlsConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * privacyAboveAccessoryBarConstraint;                                           //@synthesize privacyAboveAccessoryBarConstraint=_privacyAboveAccessoryBarConstraint - In the implementation block
@property (nonatomic,retain) NSMutableArray * alwaysActiveConstraints;                                                          //@synthesize alwaysActiveConstraints=_alwaysActiveConstraints - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerSizeObserving> sizeObserver;                                             //@synthesize sizeObserver=_sizeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hideable; 
-(BOOL)isVisible;
-(void)contentSizeCategoryDidChange;
-(SVLearnMoreButton *)learnMoreButton;
-(SVVideoAdSkipButton *)skipButton;
-(id<SVVideoSkipLockObserverFactory>)skipLockObserverFactory;
-(void)setSkipLockObserver:(id<SVVideoSkipLockObserving>)arg1 ;
-(id<SVVideoSkipLockObserving>)skipLockObserver;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id)initWithCustomControlsViewProvider:(id)arg1 loadingStateObserverFactory:(id)arg2 adActionAvailabilityObserverFactory:(id)arg3 skipLockObserverFactory:(id)arg4 adPrivacyButton:(id)arg5 learnMoreButton:(id)arg6 skipButton:(id)arg7 sizeObserver:(id)arg8 ;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(void)setLoadingStateObserver:(id<SVVideoLoadingStateObserving>)arg1 ;
-(BOOL)hideable;
-(void)hide:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(id<SVCustomControlsViewProviding>)customControlsViewProvider;
-(void)addButtonsToCustomControlsView:(id)arg1 withAdActionAvailable:(BOOL)arg2 ;
-(void)installConstraintsForButtonsInControlsView:(id)arg1 withLayoutGuides:(id)arg2 ;
-(void)updateConstraints:(id)arg1 ;
-(void)videoPlayerSizeDidChange;
-(SVAdPrivacyButton *)privacyButton;
-(id<SVVideoViewControllerSizeObserving>)sizeObserver;
-(NSMutableArray *)alwaysActiveConstraints;
-(NSLayoutConstraint *)privacyAboveTransportControlsConstraint;
-(NSLayoutConstraint *)learnMorePrimaryTopConstraint;
-(NSLayoutConstraint *)learnMorePrimaryLeadingConstraint;
-(NSLayoutConstraint *)learnMoreSecondaryTopConstraint;
-(NSLayoutConstraint *)learnMoreSecondaryLeadingConstraint;
-(NSLayoutConstraint *)privacyAboveAccessoryBarConstraint;
-(void)setLearnMorePrimaryTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLearnMorePrimaryLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLearnMoreSecondaryTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLearnMoreSecondaryLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPrivacyAboveTransportControlsConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPrivacyAboveAccessoryBarConstraint:(NSLayoutConstraint *)arg1 ;
-(CGSize)accessoryBarSize;
-(BOOL)isAccessoryBarAboveControlsView:(id)arg1 ;
-(void)activateConstraintsMode:(long long)arg1 ;
-(BOOL)areTransportControlsHidden;
-(double)verticalOffsetForFloatAboveAccessoryBar;
-(void)setConstraintsMode:(long long)arg1 ;
-(id<SVVideoAdActionAvailabilityObserverFactory>)adActionAvailabilityObserverFactory;
-(void)setAdActionAvailabilityObserver:(id<SVVideoAdActionAvailabilityObserver>)arg1 ;
-(void)setTransportControlsHidden:(BOOL)arg1 ;
-(void)embedButtonsInViewControllerWithAdActionAvailable:(BOOL)arg1 ;
-(void)removeButtonsFromViewController;
-(id<SVVideoAdActionAvailabilityObserver>)adActionAvailabilityObserver;
-(void)removeObservers;
-(void)setupObserversForVideo:(id)arg1 ;
-(long long)constraintsMode;
-(BOOL)supportsAutoAppearance;
-(void)setAlwaysActiveConstraints:(NSMutableArray *)arg1 ;
@end
