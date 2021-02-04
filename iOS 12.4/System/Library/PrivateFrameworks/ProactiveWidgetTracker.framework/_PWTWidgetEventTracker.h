/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveWidgetTracker.framework/ProactiveWidgetTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ProactiveWidgetTracker/ProactiveWidgetTracker-Structs.h>
@class NSString, PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker, NSObject;

@interface _PWTWidgetEventTracker : NSObject {

	NSString* _identifier;
	PETScalarEventTracker* _resizeTracker;
	PETGoalConversionEventTracker* _conversionTracker;
	PETScalarEventTracker* _updateTracker;
	PETDistributionEventTracker* _screenLingerTracker;
	PETScalarEventTracker* _foregroundingTracker;
	BOOL _hasReceivedActiveDisplayModeChangeNotificationOnce;
	BOOL _isCurrentlyVisible;
	BOOL _willBecomeVisible;
	BOOL _didBecomeVisibleWhileLocked;
	BOOL _widgetIsForeground;
	BOOL _widgetWasEverForeground;
	long long _activeDisplayMode;
	double _lastAppearTime;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)widgetDidBecomeForeground:(BOOL)arg1 ;
-(void)widgetWillAppear;
-(void)widgetDidAppear;
-(void)widgetWillDisappear;
-(void)widgetDidDisappear;
-(void)widgetPerformedUpdateWithResult:(unsigned long long)arg1 ;
-(void)userEngagedWithWidget;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end
