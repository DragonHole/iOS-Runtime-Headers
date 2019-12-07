/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _ATXMotion;

@interface _ATXCachedMotion : NSObject {

	NSDate* lastUpdated;
	_ATXMotion* _currentMotion;

}

@property (nonatomic,copy,readonly) _ATXMotion * currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
-(BOOL)isExpired;
-(void)update:(id)arg1 ;
-(_ATXMotion *)currentMotion;
-(id)initWithATXMotion:(id)arg1 ;
@end
