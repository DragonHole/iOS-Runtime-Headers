/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSOnboardingInterface.h>
@class NSNumber, NSArray;


@protocol VUIJSOnboardingInterface <JSExport>
@property (getter=isOptedIn,nonatomic,readonly) BOOL optedIn; 
@property (getter=isOptedInCached,nonatomic,readonly) NSNumber * optedInCached; 
@property (nonatomic,readonly) NSArray * eligibleBids; 
@property (nonatomic,readonly) BOOL isShowing; 
@required
-(void)dismiss;
-(BOOL)isShowing;
-(void)show:(id)arg1;
-(BOOL)isOptedIn;
-(NSArray *)eligibleBids;
-(void)showForBids:(id)arg1 :(id)arg2 :(id)arg3;
-(void)fetchOptedIn:(id)arg1;
-(void)setOptedIn:(BOOL)arg1 :(id)arg2;
-(void)fetchEligibleBids:(id)arg1;
-(id)isOptedInCached;

@end


@protocol OS_dispatch_queue;
@class NSNumber, NSArray, VUIOnboardingController, NSObject;

@interface VUIJSOnboardingInterface : IKJSObject <VUIJSOnboardingInterface> {

	VUIOnboardingController* _controller;
	BOOL _hasSynced;
	NSNumber* _lastReportedOptedInValue;
	BOOL _isShowing;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=isOptedIn,nonatomic,readonly) BOOL optedIn; 
@property (getter=isOptedInCached,nonatomic,readonly) NSNumber * optedInCached; 
@property (nonatomic,readonly) NSArray * eligibleBids; 
@property (nonatomic,readonly) BOOL isShowing; 
-(id)initWithAppContext:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isShowing;
-(void)show:(id)arg1 ;
-(BOOL)isOptedIn;
-(NSArray *)eligibleBids;
-(void)showForBids:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)fetchOptedIn:(id)arg1 ;
-(void)setOptedIn:(BOOL)arg1 :(id)arg2 ;
-(void)fetchEligibleBids:(id)arg1 ;
-(id)isOptedInCached;
@end
