/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXComponent;
#import <Silex/Silex-Structs.h>
@class NFPendingPromise, SXLayoutOptions;

@interface SXPendingLayoutInvalidation : NSObject {

	id<SXComponent> _component;
	NFPendingPromise* _pendingPromise;
	SXLayoutOptions* _layoutOptions;
	CGSize _suggestedSize;

}

@property (nonatomic,readonly) id<SXComponent> component;                      //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) CGSize suggestedSize;                           //@synthesize suggestedSize=_suggestedSize - In the implementation block
@property (nonatomic,readonly) NFPendingPromise * pendingPromise;              //@synthesize pendingPromise=_pendingPromise - In the implementation block
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(id<SXComponent>)component;
-(SXLayoutOptions *)layoutOptions;
-(CGSize)suggestedSize;
-(id)initWithComponent:(id)arg1 suggestedSize:(CGSize)arg2 pendingPromise:(id)arg3 layoutOptions:(id)arg4 ;
-(NFPendingPromise *)pendingPromise;
@end

