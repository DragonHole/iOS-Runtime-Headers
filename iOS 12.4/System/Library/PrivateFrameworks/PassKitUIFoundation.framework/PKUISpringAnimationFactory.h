/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKSpringAnimationFactory.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory> {

	/*^block*/id _animationDelayHandler;
	double _maximumVendedDelay;

}

@property (nonatomic,copy) id animationDelayHandler;                   //@synthesize animationDelayHandler=_animationDelayHandler - In the implementation block
@property (nonatomic,readonly) double maximumVendedDelay;              //@synthesize maximumVendedDelay=_maximumVendedDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_springAnimationForView:(UIView*)arg1 withKeyPath:(id)arg2 ;
-(id)animationDelayHandler;
-(void)setAnimationDelayHandler:(id)arg1 ;
-(id)springAnimationForView:(UIView*)arg1 withKeyPath:(id)arg2 ;
-(double)maximumVendedDelay;
-(id)_basicAnimationForView:(UIView*)arg1 withKeyPath:(id)arg2 ;
@end

